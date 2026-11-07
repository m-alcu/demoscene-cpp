// browser.cpp: the module browser panel
#include "browser.h"

#include <algorithm>
#include <cctype>
#include <cstring>
#include <fstream>

#include "imgui.h"

namespace modvis {

namespace {

std::string lower(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return (char)std::tolower(c); });
    return s;
}

std::string sizeText(uintmax_t n) {
    char b[32];
    if (n >= 1024 * 1024)
        std::snprintf(b, sizeof b, "%.1f MB", n / 1048576.0);
    else
        std::snprintf(b, sizeof b, "%.0f KB", n / 1024.0);
    return b;
}

}  // namespace

namespace {

// extensions that are never modules, so a search does not open every file below a folder
bool neverModule(const std::string& e) {
    static const char* skip[] = {".c", ".h", ".cc", ".cpp", ".hpp", ".txt", ".md", ".py", ".js", ".ts", ".rs",
                                 ".go", ".o", ".a", ".so", ".json", ".xml", ".html", ".sh", ".cmake", ".png",
                                 ".jpg", ".jpeg", ".gif", ".bmp", ".svg", ".pdf", ".zip", ".gz", ".xz", ".7z",
                                 ".tar", ".mp3", ".ogg", ".wav", ".flac", ".mp4", ".mkv", ".exe", ".dll", ".log",
                                 ".ninja", ".pyc", ".class", ".jar", ".ttf", ".otf", ".ini", ".cfg", ".yml", ".yaml"};
    for (const char* c : skip)
        if (e == c) return true;
    return false;
}

// a MOD or S3M by its header, whatever the file is called (e.g. DATA.002 in a demo)
bool moduleHeader(const fs::path& p) {
    std::error_code ec;
    if (fs::file_size(p, ec) < 1084 || ec) return false;
    std::ifstream f(p, std::ios::binary);
    char h[1084];
    if (!f.read(h, sizeof h)) return false;
    if (std::memcmp(h + 0x2C, "SCRM", 4) == 0) return true;
    const char* s = h + 1080;
    static const char* sigs[] = {"M.K.", "M!K!", "M&K!", "N.T.", "FLT4", "FLT8", "4CHN", "OCTA", "CD81"};
    for (const char* g : sigs)
        if (std::memcmp(s, g, 4) == 0) return true;
    auto digit = [](char c) { return c >= '0' && c <= '9'; };
    if (digit(s[0]) && s[1] == 'C' && s[2] == 'H' && s[3] == 'N') return true;
    if (digit(s[0]) && digit(s[1]) && s[2] == 'C' && (s[3] == 'H' || s[3] == 'N')) return true;
    return false;
}

}  // namespace

bool isModuleFile(const fs::path& p) {
    const std::string e = lower(p.extension().string());
    if (e == ".mod" || e == ".s3m") return true;
    if (neverModule(e)) return false;
    // Amiga style "mod.name"
    const std::string n = lower(p.filename().string());
    if (n.rfind("mod.", 0) == 0 && n.size() >= 7) return true;
    // anything else: look at the header
    return moduleHeader(p);
}

Browser::Browser(fs::path start) { open(start); }

Browser::~Browser() { stopSearch(); }

void Browser::open(const fs::path& dir) {
    std::error_code ec;
    fs::path d = fs::weakly_canonical(dir, ec);
    if (ec) d = dir;
    std::vector<Entry> list;
    fs::directory_iterator it(d, fs::directory_options::skip_permission_denied, ec);
    if (ec) {
        error_ = ec.message();
        return;
    }
    for (; it != fs::directory_iterator(); it.increment(ec)) {
        if (ec) break;
        const auto& e = *it;
        const std::string name = e.path().filename().string();
        if (name.empty() || name[0] == '.') continue;
        std::error_code ec2;
        if (e.is_directory(ec2))
            list.push_back({e.path(), true, 0});
        else if (e.is_regular_file(ec2) && isModuleFile(e.path()))
            list.push_back({e.path(), false, e.file_size(ec2)});
    }
    std::sort(list.begin(), list.end(), [](const Entry& a, const Entry& b) {
        if (a.isDir != b.isDir) return a.isDir;
        return lower(a.path.filename().string()) < lower(b.path.filename().string());
    });
    dir_ = d;
    entries_ = std::move(list);
    error_.clear();
    filter_[0] = 0;
    std::snprintf(pathBuf_, sizeof pathBuf_, "%s", dir_.string().c_str());
}

std::vector<fs::path> Browser::moduleFiles() const {
    std::vector<fs::path> v;
    for (const auto& e : entries_)
        if (!e.isDir) v.push_back(e.path);
    return v;
}

void Browser::stopSearch() {
    cancel_ = true;
    if (thread_.joinable()) thread_.join();
    cancel_ = false;
}

void Browser::startSearch() {
    stopSearch();
    {
        std::lock_guard<std::mutex> g(mx_);
        results_.clear();
    }
    scanned_ = 0;
    running_ = true;
    const fs::path root = searchRoot_;
    searchedRoot_ = root;
    const std::string q = lower(query_);
    thread_ = std::thread([this, root, q] {
        std::error_code ec;
        fs::recursive_directory_iterator it(root, fs::directory_options::skip_permission_denied, ec);
        std::vector<fs::path> batch;
        for (; !ec && it != fs::recursive_directory_iterator() && !cancel_; it.increment(ec)) {
            const auto& e = *it;
            std::error_code ec2;
            const std::string name = e.path().filename().string();
            if (e.is_directory(ec2)) {
                ++scanned_;
                if (!name.empty() && name[0] == '.') it.disable_recursion_pending();
                continue;
            }
            if (!e.is_regular_file(ec2) || !isModuleFile(e.path())) continue;
            if (!q.empty() && lower(name).find(q) == std::string::npos) continue;
            std::lock_guard<std::mutex> g(mx_);
            results_.push_back(e.path());
        }
        std::lock_guard<std::mutex> g(mx_);
        std::sort(results_.begin(), results_.end(),
                  [](const fs::path& a, const fs::path& b) { return lower(a.string()) < lower(b.string()); });
        running_ = false;
    });
}

std::optional<Browser::Choice> Browser::draw(const fs::path& playing) {
    std::optional<Choice> choice;
    if (!ImGui::BeginTabBar("browser")) return choice;

    if (ImGui::BeginTabItem("Folders")) {
        ImGui::SetNextItemWidth(-1);
        if (ImGui::InputText("##path", pathBuf_, sizeof pathBuf_, ImGuiInputTextFlags_EnterReturnsTrue))
            open(pathBuf_);
        if (ImGui::Button("Up")) open(dir_.parent_path());
        ImGui::SameLine();
        if (ImGui::Button("Home")) {
            if (const char* h = std::getenv("HOME")) open(h);
        }
        ImGui::SameLine();
        if (ImGui::Button("Refresh")) open(dir_);
        ImGui::SameLine();
        if (ImGui::Button("Search here")) {
            searchRoot_ = dir_;
            tab_ = 1;
            startSearch();
        }
        ImGui::SetNextItemWidth(-1);
        ImGui::InputTextWithHint("##filter", "filter this folder", filter_, sizeof filter_);
        if (!error_.empty()) ImGui::TextColored(ImVec4(1, .4f, .4f, 1), "%s", error_.c_str());
        const std::string f = lower(filter_);
        if (ImGui::BeginChild("list", ImVec2(0, 0), ImGuiChildFlags_Borders)) {
            fs::path go;
            for (const auto& e : entries_) {
                const std::string name = e.path.filename().string();
                if (!f.empty() && lower(name).find(f) == std::string::npos) continue;
                ImGui::PushID(name.c_str());
                if (e.isDir) {
                    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(.55f, .75f, 1.f, 1));
                    if (ImGui::Selectable((name + "/").c_str(), false, ImGuiSelectableFlags_AllowDoubleClick) &&
                        ImGui::IsMouseDoubleClicked(0))
                        go = e.path;
                    ImGui::PopStyleColor();
                } else {
                    const bool cur = e.path == playing;
                    if (cur) ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.f, .85f, .3f, 1));
                    if (ImGui::Selectable(name.c_str(), cur, ImGuiSelectableFlags_AllowDoubleClick) &&
                        ImGui::IsMouseDoubleClicked(0))
                        choice = Choice{e.path, moduleFiles()};
                    if (cur) ImGui::PopStyleColor();
                    const std::string sz = sizeText(e.size);
                    ImGui::SameLine(ImGui::GetContentRegionMax().x - ImGui::CalcTextSize(sz.c_str()).x);
                    ImGui::TextDisabled("%s", sz.c_str());
                }
                ImGui::PopID();
            }
            if (entries_.empty()) ImGui::TextDisabled("no folders or modules here");
            if (!go.empty()) open(go);
        }
        ImGui::EndChild();
        ImGui::EndTabItem();
    }

    if (ImGui::BeginTabItem("Search", nullptr, tab_ == 1 ? ImGuiTabItemFlags_SetSelected : 0)) {
        tab_ = -1;
        if (searchRoot_.empty()) searchRoot_ = dir_;
        ImGui::TextDisabled("in %s", searchRoot_.string().c_str());
        if (ImGui::Button("Use current folder")) searchRoot_ = dir_;
        // search a new root at once, so the list never shows a stale or never-run search
        if (!running_ && searchRoot_ != searchedRoot_) startSearch();
        ImGui::SetNextItemWidth(-60);
        const bool enter = ImGui::InputTextWithHint("##q", "name contains (empty = all)", query_, sizeof query_,
                                                    ImGuiInputTextFlags_EnterReturnsTrue);
        ImGui::SameLine();
        if (running_) {
            if (ImGui::Button("Stop", ImVec2(-1, 0))) cancel_ = true;
        } else if (ImGui::Button("Find", ImVec2(-1, 0)) || enter) {
            startSearch();
        }
        std::vector<fs::path> res;
        {
            std::lock_guard<std::mutex> g(mx_);
            res = results_;
        }
        if (running_)
            ImGui::Text("searching... %zu folders, %zu modules", scanned_.load(), res.size());
        else
            ImGui::TextDisabled("%zu modules found", res.size());
        if (ImGui::BeginChild("results", ImVec2(0, 0), ImGuiChildFlags_Borders)) {
            ImGuiListClipper clip;
            clip.Begin((int)res.size());
            while (clip.Step())
                for (int i = clip.DisplayStart; i < clip.DisplayEnd; ++i) {
                    std::error_code ec;
                    fs::path rel = fs::relative(res[i], searchRoot_, ec);
                    if (ec || rel.empty()) rel = res[i];
                    ImGui::PushID(i);
                    const bool cur = res[i] == playing;
                    if (cur) ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.f, .85f, .3f, 1));
                    if (ImGui::Selectable(rel.string().c_str(), cur, ImGuiSelectableFlags_AllowDoubleClick) &&
                        ImGui::IsMouseDoubleClicked(0))
                        choice = Choice{res[i], res};
                    if (cur) ImGui::PopStyleColor();
                    ImGui::PopID();
                }
        }
        ImGui::EndChild();
        ImGui::EndTabItem();
    }
    ImGui::EndTabBar();
    return choice;
}

}  // namespace modvis

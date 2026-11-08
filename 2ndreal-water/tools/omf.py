#!/usr/bin/env python3
"""Pull the data bytes (LEDATA/LIDATA-free) out of an OMF .OBJ: omf.py IN.OBJ OUT.bin"""
import sys
d=open(sys.argv[1],'rb').read(); out=bytearray(); p=0; names=[]
while p<len(d):
    t=d[p]; n=d[p+1]|d[p+2]<<8; r=d[p+3:p+3+n-1]; p+=3+n
    if t in (0xA0,0xA1):
        i=1 if r[0]<0x80 else 2
        off=r[i]|r[i+1]<<8; i+=2
        if t==0xA1: off|=r[i]<<16|r[i+1]<<24; i+=2
        data=r[i:]
        if len(out)<off+len(data): out.extend(b'\0'*(off+len(data)-len(out)))
        out[off:off+len(data)]=data
    elif t==0xA2: print('LIDATA!',file=sys.stderr)
    elif t==0x90: names.append(r)
open(sys.argv[2],'wb').write(out); print(sys.argv[1],len(out),names[:2])

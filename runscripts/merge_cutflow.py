#!/usr/bin/env python
import sys
first=True
sumlist=[]
for filename in sys.argv[1:]:
    numbers=[]
    steps=[]
    nevents=[]
    f = open(filename)
    print filename
    lines=f.read().splitlines()
    for line in lines:
        linelist=line.split(' : ')
        numbers.append(linelist[0])
        steps.append(linelist[1])
        nevents.append(int(linelist[2]))
    if first:       
        sumlist=list(nevents)
        first=False
    else:
        sumlist = [sum(x) for x in zip(sumlist, nevents)]
    f.close()
for a,b,c in zip(numbers,steps,sumlist):
    print str(a)+" : "+str(b)+" : "+str(c)

# -*- coding: cp936 -*-

import os
import sys

path = sys.path[0]
f=os.listdir(path)
chdir(os.path.dirname(path))
name1='stand'
name2=3
n=0
n2=0 
num=0 
for i in f:
    oldname=path+f[n]
    newname=path+name1+'_'+str(num)+"_"+str(n2)+'.txt'
    n+=1
    n2+=1
    if n2==name2 :
        n2=0
        num+=1		
    #print(oldname,'======>',newname)
    os.rename(oldname,newname)		
    

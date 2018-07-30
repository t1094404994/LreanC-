# -*- coding: utf-8 -*-
#对输入路径的Png文件按照我们的标准排序
#fristName为png文件所在的文件夹名
#"\\"表示不把‘\’字符转义
import os
import sys
fintStr=[".png",".jpg"]
def rename(path):
    f=os.listdir(path) #获取路径的所有文件名
    f.sort(key=len) #按数字大小排序
    n=0
    n2=0
    n3=0
    num=0
    if len(f)>0:
        for i in f:
            for k in fintStr:
                if str(f[n]).find(k)!=-1:
                    oldName=path+f[n]
                    newName=path+"map_"+str(int(n/23))+"_"+str(n2)+'.jpg'
                    n2=n2+1;
                    if n2==23:
                        n2=0
                    os.rename(oldName,newName)
                    print(oldName+'>>>>>'+newName)
                elif k==".jpg":
                    try:
                        rename(path+f[n]+'\\') #递归
                    except:
                        print('到底部')
                        continue
            n=n+1
    else:
        rename(input("cin path\n"))
if __name__=="__main__": #main入口
    rename(input("Cin Path\n"))
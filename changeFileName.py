# -*- coding: utf-8 -*-
#对输入路径的Png文件按照我们的标准排序
#fristName为png文件所在的文件夹名
#"\\"表示不把‘\’字符转义
import os
import sys
fintStr=["stand","run","attact","die","skill"]
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
                if str(f[n]).find(k)!=-1: #查找
                    f2=os.listdir(path+k)
                    f2.sort(key=len)
                    name=len(f2)/5
                    n2=0
                    n3=0
                    n4=0
                    for j in f2:
                        oldName=path+k+"\\"+f2[n2]
                        newName=path+k+"\\"+k+'_'+str(n4)+'_'+str(n3)+'.png'
                        n2=n2+1
                        n3=n3+1
                        if n3==name:
                            n3=0
                            n4=n4+1
                        os.rename(oldName,newName)
                        print(oldName+'>>>>>'+newName)
                elif k=="skill":
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
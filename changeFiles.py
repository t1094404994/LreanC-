#继承自eui的显示对象，底部加上window["name"]=name;
import os
import sys
checkname="extends eui." #目标字符
passnames=["interface"] #过滤词条
def findPath(path):
    f=os.listdir(path) #获取路径的所有文件名
    for n in f:
        try:
            findPath(path+n+'\\') #递归
        except:
            print("到底部")
            if n.find(".ts")!=-1:
                checkPath(path+n,n)
            continue
def checkPath(filePath,name):
    file=load(filePath)
    print("正在处理的文件:"+name)
    try:
        filedata=file.readlines()
    finally:
        for k in filedata:
            ispass=False
            for passname in passnames:
                if k.find(passname)!=-1:
                    ispass=True
                    print("包含过滤词条:"+passname)
                    break
            if ispass:
                break
            if k.find(checkname)!=-1:
                truename=""
                for st in name:
                    if st==".":
                        break
                    truename+=st
                file.writelines("\nwindow[\""+truename+"\"]="+truename)
                file.close()
                print("成功处理的文件:"+name)
                break    
def load(filePath):
    return open(filePath,"r+",encoding='utf-8')
if __name__=="__main__":
    findPath(input("Cin Path\n"))
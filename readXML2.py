# -*- coding: utf-8 -*-
#后端JSON文件配置表和前端XML文件配置表属性修改后转换脚本
import json
def load():
    with open("HeroEquip2.json","r",encoding='utf-8') as json_file:
        data=json.loads(json_file.read())
        return data
def TestMiniDom():
    from xml.dom import minidom
    doc =minidom.parse("HeroEquip.xml")
    #dor2=minidom.parse("HeroEquip2.xml")
    root=doc.documentElement
    #root2=dor2.documentElement
    employees=root.getElementsByTagName("HeroEquip")
    jsonData=load()
    #employees2=root2.getElementsByTagName("")
    i=0
    for employee in employees :
        print("--------------------------------------")
        #print(employee.nodeName)
        #print(employee.toxml())
        if employee.getElementsByTagName("evolveCost"):
            y=employee.getElementsByTagName("evolveCost")[0]
            #print(jsonData[i])
            ds=str(jsonData[i]["evolveCost"])
            newDs=""
            for k in ds:#排除字符
                if k!="\\":
                    newDs=newDs+k
            print(y.childNodes[0].nodeValue)
            y.childNodes[0].nodeValue=newDs  #修改evolveCost节点的值
        i=i+1
    f=open("HeroEquipNew.xml","w",encoding='utf-8') #默认编码为gbk，有中文就会乱码
    doc.writexml(f) #写入修改
TestMiniDom()
# -*- coding: utf-8 -*-
#后端JSON文件配置表修改属性
import json
def load():
    with open("ChapterTowerBoss.json","r",encoding='utf-8') as json_file:
        data=json.loads(json_file.read())
        return data
def TestMiniDom():
    jsonData=load()
    for employee in jsonData:
        for key,v in employee.items():
            if key=="attackAbility":
                v=str(int(v)*100)
                employee[key]=v
                print(v)
    f=open("ChapterTowerBossNew.json","w",encoding='utf-8') #默认编码为gbk，鬼知道为啥变成英文了 utf-8万岁
    json.dump(jsonData,f)
TestMiniDom()
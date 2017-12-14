# -*- coding: utf-8 -*-
def TestMiniDom():  
  from xml.dom import minidom
  #from htmllib import HTMLParser  
  doc = minidom.parse("new3.xml")
  doc2=minidom.parse("ElementUpgrade.xml")
  # get root element: <employees/>  
  root = doc.documentElement  
  root2=doc2.documentElement
  # get all children elements: <employee/> <employee/>  
  employees = root.getElementsByTagName("ElementUpgrade")
  employees2 = root2.getElementsByTagName("ElementUpgrade")
  i=0  
  for employee in employees :  
    print("-------------------------------------------")  
    print (employee.nodeName)  
    print (employee.toxml())  
    #y=employee.getElementsByTagName("cost")[0] 移除节点
    #employee.removeChild(y)
    newName=employees2[i].getElementsByTagName("cost")[0] #获取cost节点
    nameNode = employee.getElementsByTagName("type")[0]
    y=employee.getElementsByTagName("time")[0]
    employee.insertBefore(newName,y)  #增加节点
    print (nameNode.childNodes)  
    print (nameNode.nodeName + ":" + nameNode.childNodes[0].nodeValue)
    etype=nameNode.childNodes[0].nodeValue  #通过nodeValue修改节点值
    i=i+1
    print("-------------------------------------------")    
    for n in employee.childNodes:  
      print (n)
  f=open('new4.xml','w')
  doc.writexml(f) #将修改写入文件f
TestMiniDom()
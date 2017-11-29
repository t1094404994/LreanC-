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
    # element name : employee  
    print (employee.nodeName)  
    # element xml content : <employee><name>windows</name><age>20</age></employee>  
    # basically equal to toprettyxml function  
    print (employee.toxml())  
    #y=employee.getElementsByTagName("cost")[0] 移除节点
    #employee.removeChild(y)
    newName=employees2[i].getElementsByTagName("cost")[0]
    nameNode = employee.getElementsByTagName("type")[0]
    y=employee.getElementsByTagName("time")[0]
    employee.insertBefore(newName,y)  
    print (nameNode.childNodes)  
    print (nameNode.nodeName + ":" + nameNode.childNodes[0].nodeValue)
    etype=nameNode.childNodes[0].nodeValue
    i=i+1
    print("-------------------------------------------")    
    for n in employee.childNodes:  
      print (n)
  f=open('new4.xml','w')
  #html_parser=HTMLParser.HTMLParser()
  #doc=html_parser.unescape(self.dom.toxml().decode('utf-8'))
  doc.writexml(f)
TestMiniDom()
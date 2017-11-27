#include<iostream>
#include<vector>
using namespace std;
class Father{
public:
    virtual void testf(){
        cout<<"this is father's funtion"<<endl;
    }
};
class Son:public Father{
public:
    void testf(){
        cout<<"this is son's funtion"<<endl;
    }
};
int main(){
    Son son;
    son.testf();
    system("pause");
    return 0;
}
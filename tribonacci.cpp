#include<iostream>
using namespace std;
//求斐波那契数列第N项 1.递归 2.求和
int tribonacci1(unsigned int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return tribonacci1(n-1)+tribonacci1(n-2);
}
int tribonacci2(unsigned int n){
    int a=0;
    int b=1;
    int c=2;
    if(n==1){
        return b;
    }
    if(n==2){
        return c;
    }
    for(int i=3;i<=n;i++){
        a=b+c;
        b=c;
        c=a;
        if(i==n){
            return a;
        }
    }
}
int main(){
    while(true){
        unsigned int a;
        cout<<"in a number"<<endl;
        cin>>a;
        cout<<"tribonacci n is :"<<tribonacci1(a)<<endl;
        cout<<"tribonacci n is :"<<tribonacci2(a)<<endl;        
    }
    return 0;
}
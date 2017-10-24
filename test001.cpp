#include<iostream>
using namespace std;
int main(){
   //完全数:6 它的因数是1,2,3,6，除去它本身这些数的和等于它
   //查找6以内的完全数
   for(int i=2;i<=10000;i++){
       int sum=0;
       for(int j=1;j<i;j++){
           if(i%j==0){
               sum+=j;
           }
       }
       if(sum==i){
           cout<<i<<"is a perfect number"<<endl;
       }
   }
    system("pause");
    return 0;
}
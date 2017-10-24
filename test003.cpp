#include<iostream>
#include<vector>
using namespace std;
//计算十进制整数的二进制数的数位1的总数
int countOnes(unsigned int n){
    int ones=0;
    while(0<n){
        ones+=(1&n);
        n>>=1;
    }
    return ones;
}
int main(){
    int n;
    cin>>n;
    cout<<countOnes(n)<<endl;
    system("pause");
    return 0;
}
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
//计算2^n
int pow2N(int n){
    int pow=1;
    while(0<n--){
        pow<<=1;
    }
    return pow;
}
int main(){
    int n;
    cin>>n;
    //cout<<countOnes(n)<<endl;
    cout<<pow2N(n)<<endl;
    system("pause");
    return 0;
}
#include<iostream>
#include<string>
#include<vector>
using namespace std;
/** 原始匹配字符算法 时间复杂度0(m*n)**/
void matchStr(string &S,string &T){
    int n=0; 
    for(int i=0;i<S.size();i++){
        for(int j=0;j<T.size();j++){
            if(S[n]==T[j]){
                n++;
            }else{
                n=i+1;
                break;
            }
            if(j==T.size()-1){
                n=i+1;
                cout<<i<<endl;
            }
        }
    }
}
/** KMP算法 时间复杂度0(m+n)*/
int main(){
    string S="asddsdjdhsdfsdsdfs";
    string T="sd";
    matchStr(S,T);
    system("pause");
    return 0;
}
#include<iostream>
#include<string>
#include<vector>
using namespace std;
/** 原始匹配字符算法 时间复杂度0(m*n)**/
void matchStr(string &S,string &T){
    int n=0; 
    for(int i=0;i<S.size();i++){
        for(int j=0;j<T.size();j++){// j:需要匹配的字符串的标记 n:母字符串的标记
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
void next(string &S,vector<int>&next){
    next[0]=-1;
    for(int i=0;i<S.size(),i++){

    }
}
void kmpMatchStr(string &S,string &T){

}
/** KMP算法 时间复杂度0(m+n)*/
int main(){
    string S;
    string T;
    while(1){
        cout<<"please cin mather string"<<endl;
        cin>>S;
        cout<<"Please cin target string"<<endl;
        cin>>T;
        matchStr(S,T);
    }
    system("pause");
    return 0;
}
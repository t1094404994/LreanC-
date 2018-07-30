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
void NEXT(string &S,vector<int>&next,string&T){
    next[0]=0;
    for(int i=1;i<S.size();i++){
        int k=next[i-1];
        while(k>0&&S[k]!=S[i]){
            k=next[k-1];
        }
        if(S[k]==S[i]){
            k++;
        }
        next[i]=k;
    }
    int i,q; //长串和短串的下标
    int n=T.size(); //长串长
    int j=S.size(); //短串长
    for (i = 0,q = 0; i < n; ++i) //遍历长串
    {
        while(q>0&&S[q]!=T[i]){
            q=next[q-1];
        }
        if(S[q]==T[i]){
            q++;
        }
        if(q==j){
            cout<<i<<endl;
        }
    }  
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
        //matchStr(S,T);
        vector<int>next(T.size());
        NEXT(T, next,S);
    }
    system("pause");
    return 0;
}
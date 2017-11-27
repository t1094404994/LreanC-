#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*KMP算法基于暴力匹配算法
**通过next[]跳转就是KMP算法的核心    
*/
/** NEXT对照*/
void NEXT(const string &T, vector<int>&next){
    next[0]=-1;
    for(int i=1;i<T.size();i++){
       int j=next[i-1];
       int c=0;
       while(c<=i){
        if(T[c+j]==T[T.size()-c-j-1]){
            next[i]=next[i-1]+1;
        }else{
            next[i]=next[i]
        }   
        c++;
       }
    }
}
int main(){
    system("pause");
    return 0;
}
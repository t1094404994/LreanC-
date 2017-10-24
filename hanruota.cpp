#include<iostream>
#include<vector>
using namespace std;
int main(){
    //计算汉诺塔的移动次数
    /*汉诺塔游戏的数学语言:
      1.有三个特殊的容器 其中一个容器A是由P1,P2...P64的这些元素组成,其余两个B,C是空的
      2.规则有: 容器之间一次只能移动第一个元素
               容器里的元素必须大的在后
      3.目的:将容器A中的元素移动到B中         
    */
    vector<int> A(64);
    vector<int> B,C;
    for(int i=0;i<64;i++){
        A[i]=i;
    }
    int num=0;
    system("pause");
    return 0;
}
//三种倒转方式比较 
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;
void reverse1(vector<int> &v)
{
    for(int i=0;i<v.size()/2;i++)
    {
        v[i]=v[i]^v[v.size()-i-1];
        v[v.size()-i-1]=v[i]^v[v.size()-i-1];
        v[i]=v[i]^v[v.size()-i-1];
    }
}
void reverse2(vector<int> &v)
{
    v={v.rbegin(),v.rend()};
}
void reverse3(vector<int> &v)
{
    reverse(v.begin(),v.end());
}
int main(){
   int n=0;
   vector<int> v;
   while(n<10000000)
   {
       v.push_back(n);
       n++;
   }
   int a=clock();
   reverse1(v);
   reverse1(v);
   int b=clock();
   cout<<b-a<<endl;

    int c=clock();
    reverse2(v);
    reverse2(v);
    int d=clock();
    cout<<d-c<<endl;

    int e=clock();
    reverse3(v);
    reverse3(v);
    int f=clock();
    cout<<f-e<<endl;
}
//第一种是手写函数, 第一位和倒一交换, 第二和倒二交换, 直到最中间
//第二种是利用c++11vector新的初始化方法
//第三种是利用algorithm中的reverse方法
//在不同平台结果好像有点不同, 从我自己测试的情况来看, mac下时间2>1>3,win下 1>2>3 



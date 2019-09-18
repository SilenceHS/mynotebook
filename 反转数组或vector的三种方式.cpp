//���ֵ�ת��ʽ�Ƚ� 
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
//��һ������д����, ��һλ�͵�һ����, �ڶ��͵�������, ֱ�����м�
//�ڶ���������c++11vector�µĳ�ʼ������
//������������algorithm�е�reverse����
//�ڲ�ͬƽ̨��������е㲻ͬ, �����Լ����Ե��������, mac��ʱ��2>1>3,win�� 1>2>3 



#include <iostream>
#include <map>
#include <unordered_map> 
#include <ctime>
using namespace std;
int main()
{
map<int,int> m1;
unordered_map<int,int> m2;
int n=0;
int m1t1=clock();
while(n<1000000)
{
	m1[n]=2*n;
	n++;	
}
int m1t2=clock();
n=0;

int m2t1=clock();
while(n<1000000)
{
	m2[n]=2*n;
	n++;	
}
int m2t2=clock();

cout<<"write:"<<endl<<"m1:"<<m1t2-m1t1<<endl<<"m2:"<<m2t2-m2t1<<endl; 
n=0;
m1t1=clock();
while(n<1000000)
{
	m1.count(n);
	n++;
}
m1t2=clock();

n=0;
m2t1=clock();
while(n<1000000)
{
	m2.count(n);
	n++;
}
m2t2=clock();
cout<<"read:"<<endl<<"m1:"<<m1t2-m1t1<<endl<<"m2:"<<m2t2-m2t1<<endl; 
}
//���Կ���unordered_map�ڶ�д�϶�����map �������������
//stl::map������java�е�TreeMap����boost::unordered_map��Ӧ��java�е�HashMap



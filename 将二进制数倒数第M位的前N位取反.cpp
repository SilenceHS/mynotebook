//����������������Mλ��ǰNλȡ��
#include <iostream>
using namespace std;
int main()
{
	int num = 1244; //100 11011 100
	int M = 3;
	int N = 5;

	//start
	int a = (1 << N) - 1;//00000011111
	a = a << M;//000 11111 000
	num = num ^ a;
	cout << num << endl;//100 00100 100
}
//����һ����, �ڹ涨λ��ȫ��1, ��ԭ��������



//将二进制数倒数第M位的前N位取反
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
//构造一个数, 在规定位置全是1, 与原数异或操作



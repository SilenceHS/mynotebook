
//ͳ��num�ж�����1�ĸ���
#include <iostream>
using namespace std;
int main()
{
	int num = 7;//111
	int count = 0;
	for (int i = 0; num != 0; num &= num - 1)
		count++;
	cout << count << endl;
}
//111 -> 110 -> 100 ->000 ����num-1��������ʵ����ȥ���һ��1


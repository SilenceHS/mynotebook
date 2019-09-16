
//统计num中二进制1的个数
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
//111 -> 110 -> 100 ->000 与上num-1操作可以实现消去最后一个1


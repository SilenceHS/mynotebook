
//�ҳ���Ⱥ��Ψһ�ĵ���
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int num=0;
	vector<int> a = { 10,30,5,30,5 };
	for (int i = 0; i < a.size(); i++)
		num = num ^ a[i];
	cout << num;
}
//1.����н����� 2.a^b^a=b 3.0^b=b; 4.b^b=0;



/*
	�������βΣ����Դﵽ�޸Ĳ���ֵ��Ŀ�ģ��ʹ���ָ��һ��
*/


#include <iostream>
using namespace std;

// ��������������
void func0(int &a)
{
	cout << "func0 a:" << a << endl;
	a = 666;
}

void func1(int a)
{
	cout << "func1 a:" << a << endl;
	a = 999;
}

// ָ������������
void func2(int *a)
{
	cout << "func2 *a:" << *a << endl;
	*a = 888;
}

int main()
{
	int num = 1024;

	// �����൱�ڸ�����num������һ�����ñ���a������a��num��Ӧͬһ���ڴ�ռ䡣
	// func0���޸�a��ֵ�����൱���޸�num��ֵ
	func0(num);	  
	cout << "after func0 num:" << num << endl;

	func1(num);
	cout << "after func1 num:" << num << endl;

	func2(&num);
	cout << "after func2 num:" << num << endl;

	return 0;
}
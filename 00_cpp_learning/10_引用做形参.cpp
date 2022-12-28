/*
	引用做形参，可以达到修改参数值的目的，和传递指针一样
*/


#include <iostream>
using namespace std;

// 引用做函数参数
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

// 指针做函数参数
void func2(int *a)
{
	cout << "func2 *a:" << *a << endl;
	*a = 888;
}

int main()
{
	int num = 1024;

	// 这里相当于给变量num定义了一个引用变量a，所以a和num对应同一块内存空间。
	// func0中修改a的值，就相当于修改num的值
	func0(num);	  
	cout << "after func0 num:" << num << endl;

	func1(num);
	cout << "after func1 num:" << num << endl;

	func2(&num);
	cout << "after func2 num:" << num << endl;

	return 0;
}
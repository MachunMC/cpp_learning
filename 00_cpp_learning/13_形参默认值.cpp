/*
	1. C++中，函数定义的时候可以指定参数默认值，可以所有参数都指定默认值，也可以部分参数指定默认值

	2. 全部参数指定默认值：函数调用时，可以不传递实参，使用默认值；也可以传递实参，使用传递的值

	3. 部分参数指定默认值：必须按照从右到左的顺序依次指定默认值

	4. 函数声明和函数定义中，不能同时有默认值。默认值需要加在函数声明处，并且函数定义处不能加默认值
*/

#include <iostream>
using namespace std;

// 函数声明和函数定义中，不能同时有默认值，默认值需要加在函数声明处，并且函数定义处不能加默认值
int func2(int a = 10, char b = 'c');

// 1. 全部参数指定默认值
int func0(int a = 10, int b = 99, char c = 'm')
{
	cout << "a:" << a << " "
		<< "b:" << b << " "
		<< "c:" << c << endl;

	return 0;
}

// 2. 部分参数指定默认值，必须按照从右到左的顺序依次指定默认值
//int func1(int a = 10, char b ='c', int c)
int func1(int a, char b ='c', int c = 'H')
{
	cout << "a:" << a << " "
		<< "b:" << b << " "
		<< "c:" << c << endl;

	return 0;
}

int main()
{
	func0();
	func0(1);
	func0(22, 33);
	func0(44, 55, 'a');

	cout << endl;

	func1(1);
	func1(1, 'a');

	cout << endl;
	func2();

	return 0;
}

int func2(int a, char b)
{
	cout << "a:" << a << " "
		 << "b:" << b << endl;

	return 0;
}
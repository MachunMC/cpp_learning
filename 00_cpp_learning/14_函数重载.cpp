/* 
	1. 函数重载：同一作用域内，函数名相同，参数列表不同（参数个数不同或参数类型不同）的函数，互为重载函数

	2. 重载函数定义

	3. 重载函数的调用：函数调用时，编译器会根据传递的参数，自动匹配相应的函数

	4. 使用重载函数有啥好处：使得函数调用更加灵活

	5. 注意点：默认函数和函数重载结合在一起使用时，会造成函数调用不明确的问题

*/


#include <iostream>
using namespace std;


// 以下3个函数，互为重载函数
void func(int a)
{
	cout << "func 0 a:" << a << endl;
}

void func(int a, int b = 199)
{
	cout << "func 1 a:" << a << " "
		 << "b:" << b << endl;
}

void func(char a)
{
	cout << "func 2 a:" << a << endl;
}

// 这个函数和上面3个函数，函数名相同，参数列表不同，返回值不同，也是互为重载函数吗？
// 编译没报错，调用也可以，感觉是互为重载函数
int func(int a, int b, int c)
{
	cout << "func 4 a:" << a << " "
		<< "b:" << b << " "
		<< "c:" << c << endl;

	return 0;
}

int main()
{
	//func(1);  // 这里函数调用不明确
				// 可以理解为调用第一个func，只传递一个参数，也可以理解为调用第二个func，省略第二个参数
				// 要避免这种问题
	func(1, 2);
	func('m');

	func(1, 2, 3);

	return 0;
}
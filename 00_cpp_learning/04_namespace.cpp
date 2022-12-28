/*
  1. 功能：区别同名的函数和变量

  2. 创建命名空间
	namespace 命名空间名称
	{
		void func(void)
		{
			cout << "hello namespace" << endl;
		}
	}
	注意：花括号最后不用加分号

	3. 使用
		(1) using namespace xxx，在调用前声明这个命名空间
		(2) xxx::func()，使用作用域运算符 "::"，表示使用xxx命名空间中的func函数

*/


#include <iostream>
using namespace std;

namespace student
{
	void func(void)
	{
		cout << "hello student namespace" << endl;
	}
}

namespace teacher
{
	void func(void)
	{
		cout << "hello teacher namespace" << endl;
	}
}

int main()
{
	using namespace student; // 打开命名空间
	func();

	using namespace teacher;
	//func();				// 直接这样写，不知道使用的哪个命名空间里的func函数
	teacher::func();		// 需要加上作用域运算符

	return 0;
}
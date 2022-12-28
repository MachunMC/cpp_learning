/*
	当子类和父类中，有同名的成员时，C++采取覆盖的方式进行处理
	1. 数据成员同名
		不管在类内还是类外，如果没有指定类名作用域，表示的是该类中的成员；
		如果子类中想使用父类的成员，需要指定类名作用域

	2. 函数成员同名
		(1) 函数名和参数都相同：同上
		(2) 函数名相同，参数不同：使用父类中的成员函数时，需要指定类名作用域，否则会报错
			注意：子类和父类中的同名函数，不是重载函数

*/

//#include <iostream>
//using namespace std;
//
//// 定义父类
//class CFather
//{
//public:
//	int age;
//
//	CFather()
//	{
//		age = 52;
//	}
//
//	void func(void)
//	{
//		cout << "CFather age:" << age << endl;
//	}
//
//	void func1(int a)
//	{
//		cout << "CFather func1" << endl;
//	}
//};
//
//// 定义子类
//class CSon : public CFather
//{
//public:
//	int age;
//
//	CSon()
//	{
//		age = 26;
//	}
//
//	void func(void)
//	{
//		cout << "CSon age:" << age << endl;				// 这里输出的是子类中的成员变量age
//		cout << "CFather age:" << CFather::age << endl; // 这里可以使用类名作用域输出父类的成员变量age
//	}
//
//	void func_test(void)
//	{
//		func();
//		CFather::func();
//	}
//
//	void func1(void)
//	{
//		cout << "CSon func1" << endl;
//	}
//};
//
//
//int main()
//{
//	CSon cTom;
//
//	// 数据成员
//	cout << "Tom's age:" << cTom.age << endl;					// 这里表示的是子类的成员
//	cout << "Tom's father's age:" << cTom.CFather::age << endl;	// 这里使用父类的成员，需要指定类名作用域
//	cout << endl;
//
//
//	// 函数成员：函数名和参数都相同
//	//cTom.func_test();
//	cTom.func();
//	cTom.CFather::func();
//	cout << endl;
//
//
//	// 函数成员：函数名相同，参数不同
//	cTom.func1();
//	cTom.CFather::func1(123);
//
//	return 0;
//}
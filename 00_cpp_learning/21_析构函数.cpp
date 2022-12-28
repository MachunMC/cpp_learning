/*
	1. 析构函数作用：对象销毁的时候，自动调用，做一些清理工作，如内存的释放

	2. 析构函数的形式（对比构造函数）
		（1) ~类名()
			{
				function body
			}
		 (2) 析构函数没有参数，所以没有重载函数
		 (3) 系统有一个默认的析构函数，函数功能是什么都不做

*/


#include <iostream>
using namespace std;

class Cstudent
{
public:
	int age;
	char gender;

	// 定义构造函数
	Cstudent()
	{
		cout << "这是一个构造函数" << endl;
	}

	// 定义析构函数
	~Cstudent()
	{
		cout << "这是一个析构函数" << endl;
	}
};

int main()
{
	Cstudent cTom;					  // 该对象的构造函数，在创建对象的时候调用；该对象的析构函数，在return 0之前调用
	Cstudent* pcLucy = new Cstudent;  // 该对象的构造函数，在new对象的时候调用；该对象的析构函数，在delete对象的时候调用

	delete pcLucy;	// delete触发析构函数

	Cstudent();		// 临时对象，作用域只有这一行

	cout << "析构函数" << endl;
	return 0;
}
/*
	1. 拷贝构造函数，也叫复制构造函数，是一种特殊的构造函数

	2. 拷贝构造函数的形式
		class_name(const class_name &a)
		{
			function body
		}

	3. 拷贝构造函数的作用
		默认的拷贝构造函数，逐个复制非静态成员的值，复制的是成员的值。因为静态成员，是所有对象所共有的
		系统默认的这个，又叫做浅拷贝

	4. 拷贝构造函数啥时候调用？
		(1) 新建一个对象，并将其初始化为同类现有对象
			i. Cstudent cTom(cLucy);
			ii. Cstudent cTom = cLucy;
			iii. Cstudent *pcTom = new Cstudent(cLucy);
		(2) 函数参数传递对象的值
		(3) 函数返回对象的值

*/


//#include <iostream>
//using namespace std;
//
//
//class Cstudent
//{
//public:
//	char name[32];
//	char gender;
//	int  age;
//
//	// 定义构造函数
//	Cstudent()
//	{
//		cout << "构造函数" << endl;
//	}
//
//	// 定义拷贝构造函数
//	Cstudent(const Cstudent &a)
//	{
//		cout << "拷贝构造函数" << endl;
//	}
//
//	// 定义析构函数
//	~Cstudent()
//	{
//		cout << "析构函数" << endl;
//	}
//};
//
//// 函数参数传递对象的值时，调用拷贝构造函数
//void func(Cstudent a)
//{
//
//}
//
//// 函数返回对象的值时，调用拷贝构造函数
//Cstudent func1()
//{
//	Cstudent a;
//	return a;
//}
//
//int main()
//{
//	Cstudent cTom;
//	//Cstudent cLucy(cTom);
//	//Cstudent cJack = cTom;
//	Cstudent *pcMichael = new Cstudent(cTom);
//
//	//func(cTom);
//	cTom = func1();
//
//	return 0;
//}
/*
	1. 静态数据成员
		(1) 类的静态数据成员，无法通过构造函数的初始化列表，和构造函数内部的赋值进行初始化
		(2) 类的静态数据成员，只能在类外进行赋值
		(3) 类内只有静态常量整形数据成员，才能在定义变量的时候直接初始化
		(4) 静态数据成员，在定义类的时候，就在内存中占据空间；其他类型的成员，只有在创建对象的时候才在内存中存在
		(5) 类的静态成员变量，可以直接通过类名作用域进行调用，不需要创建对象
		(6) 类的静态成员变量，是所有类的对象公有的，所有对象访问的静态成员变量，是同一个地址的同一个变量

	2. 静态函数成员：静态函数只能引用静态成员，不能引用其他类型的成员

*/


//#include <iostream>
//using namespace std;
//
//class Cstudent
//{
//public:
//	static int  age;
//	static const int score = 100;  // 类内只有静态常量整形数据成员，才能在定义变量的时候直接初始化
//	//static const float f = 12.34f;   // 不可以直接初始化
//	char gender;
//	char name[32];
//
//	// 构造函数
//	//Cstudent() : age(12), gender('M')
//	Cstudent()
//	{
//		//age = 12;
//		gender = 'M';
//
//		cout << "age:" << age << "  "
//			<< "gender:" << gender << endl;
//	}
//
//	static void show()
//	{
//		cout << "addr_age:" << &age << " "
//			<< "addr_score:" << &score << endl;
//
//		cout << "age:" << age << "  "
//			<< "score:" << score << endl;
//			 //<< "gender:" << gender << endl; //静态函数只能引用静态成员，不能引用其他类型的成员
//	}
//
//	// 析构函数
//	~Cstudent()
//	{
//		cout << "析构函数" << endl;
//	}
//};
//
//int Cstudent::age = 26; // 类外进行静态数据成员的初始化
//
//
//int main()
//{
//	Cstudent cTom;
//	Cstudent cLucy;
//
//	cTom.show();
//	cLucy.show();
//
//	cout << Cstudent::age << endl; // 静态成员变量，可以直接通过类名作用域进行调用，不需要创建对象
//
//	return 0;
//}
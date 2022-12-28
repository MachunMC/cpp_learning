/*
	1. this指针的作用：区分类中同名的变量

	2. this是一个class*类型的指针变量，指向所定义的对象

	3. this指针的作用域，是类内部的成员函数，是系统默认的隐含参数

	4. 通过this指针，可以得到对象的地址
*/


//#include <iostream>
//using namespace std;
//
//class Cstudent
//{
//public:
//	int  age;
//	char gender;
//	char name[32];
//
//	// 定义构造函数
//	Cstudent(int age)
//	{
//		//age = age;  // 构造函数形参age和类的成员变量age具有相同的变量名，在构造函数的作用域内，形参变量名有效。
//		//			  // 所以这里相当于形参age给形参age赋值
//		//cout << "构造函数 age:" << age << endl;   // 这里的age，是表示构造函数形参age
//
//		// 可以用下面的表达方式
//		this->age = age;	// this是一个Cstudent*类型的指针变量，指向所定义的对象，所以可以用this指针引用对象的成员
//		cout << "构造函数 age:" << this->age << endl; 
//	}
//
//	void show_age()
//	{
//		//cout << "show age:" << age << endl;	  // 这里的age表示类的成员变量age，构造函数给成员变量age赋值的目的没有达到
//		//									  // 所以这里打印的age值不是和构造函数中的age值不同
//
//		cout << "show age:" << this->age << endl;
//	}
//
//	Cstudent* get_addr()
//	{
//		return this;
//	}
//
//	// 定义析构函数，没有形参
//	~Cstudent()
//	{
//		cout << "析构函数called" << endl;
//	}
//};
//
//int main()
//{
//	Cstudent cTom(26);
//	cTom.show_age();
//
//	cout << "cTom:0x" << cTom.get_addr() << endl;
//
//	return 0;
//}
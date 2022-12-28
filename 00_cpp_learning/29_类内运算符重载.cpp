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
//	int  score;
//
//	// 定义构造函数
//	Cstudent()
//	{
//		strncpy(name, "michael", 32);
//		gender = 'M';
//		age = 27;
//		score = 100;
//	}
//
//	// 类内定义重载运算符，默认第一个参数为this指针，指向该对象本身，所以int a是第二个参数
//	int operator+(int a) 
//	{
//		return (age + a);
//	}
//};
//
//
//// 参数个数只能是两个
////int operator+(Cstudent &stu, int a, int b)
////{
////	return (stu.age + a);
////}
//
//
//int main()
//{
//	Cstudent cMichael;
//
//	cout << cMichael + 12 << endl;
//	//12 + cMichael;	// 这样写运算符左右两边的数据类型不匹配
//
//	return 0;
//}
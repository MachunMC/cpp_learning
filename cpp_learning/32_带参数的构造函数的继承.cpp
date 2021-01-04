/*
	子类在构造函数的初始化列表位置，调用父类的构造函数来给其传参
*/


//#include <iostream>
//using namespace std;
//
//
//// 定义一个父类
//class CPeople
//{
//public:
//	int salary;
//	char gender;
//
//	CPeople(int a, char b)
//	{
//		salary = a;
//		gender = b;
//		cout << "CPeople salary:" << a << endl;
//	}
//};
//
//
//// 定义一个子类
//class CWorker : public CPeople
//{
//public:
//	int salary;
//
//	CWorker(int a): CPeople(a, 80)
//	{
//		salary = a;
//		cout << "CWorker salary:" << salary << endl;
//	}
//};
//
//
//// 定义一个子类
//class CTeacher : public CWorker
//{
//public:
//	int age;
//	int salary;
//
//	// 在构造函数的初始化列表位置，给父类的构造函数传参
//	CTeacher(int a, int b) : CWorker(b)
//	{
//		age = a;
//		salary = b;
//		cout << "CTeacher age:" << age << " salary:" << salary << endl;
//	}
//};
//
//
//int main()
//{
//	CTeacher cTom(26, 20000);
//
//	return 0;
//}
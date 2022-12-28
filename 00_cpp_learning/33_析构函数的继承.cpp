/*
	继承的析构函数调用顺序：先调用子类，在调用父类
*/


//#include <iostream>
//using namespace std;
//
//// 定义一个父类
//class CPeople
//{
//public:
//	CPeople()
//	{
//		cout << "CPeople 构造函数" << endl;
//	}
//
//	~CPeople()
//	{
//		cout << "CPeople 析构函数" << endl;
//	}
//};
//
//// 定义一个子类
//class CWorker : public CPeople
//{
//public:
//	CWorker()
//	{
//		cout << "CWorker 构造函数" << endl;
//	}
//
//	~CWorker()
//	{
//		cout << "CWorker 析构函数" << endl;
//	}
//};
//
//// 定义一个子类
//class CTeacher : public CWorker
//{
//public:
//	CTeacher()
//	{
//		cout << "CTeacher 构造函数" << endl;
//	}
//
//	~CTeacher()
//	{
//		cout << "CTeacher 析构函数" << endl;
//	}
//};
//
//int main()
//{
//	CTeacher cTom;
//	cout << "析构函数的继承" << endl;
//
//	return 0;
//}
/*
	继承的构造函数调用顺序：先调用父类，在调用子类
	
*/


//#include <iostream>
//using namespace std;
//
//
//// 定义一个基类（父类）
//class CPeople
//{
//public:
//	CPeople()
//	{
//		cout << "CPeople" << endl;
//	}
//};
//
//// 定义一个子类，继承CPeople
//class CWorker : public CPeople
//{
//public:
//	CWorker()
//	{
//		cout << "CWorker" << endl;
//	}
//};
//
//// 定义一个子类，继承CWorker
//class CTeacher : public CWorker
//{
//public:
//	CTeacher()
//	{
//		cout << "CTeacher" << endl;
//	}
//};
//
//int main()
//{
//	CWorker cTom;
//
//	cout << endl;
//	CTeacher CMichael;
//
//	return 0;
//}
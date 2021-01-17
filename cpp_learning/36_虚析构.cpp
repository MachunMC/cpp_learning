/*
	父类的析构函数，如果不加virtual关键字，在delete的时候，不会调用子类的析构函数，只调用父类的析构
*/


//#include <iostream>
//using namespace std;
//
//
//class CFather
//{
//public:
//	virtual ~CFather()  // 如果不加virtual关键字，不会调用子类的析构函数
//	{
//		cout << "hello father" << endl;
//	}
//};
//
//class CSon : public CFather
//{
//public:
//	~CSon()
//	{
//		cout << "hello son" << endl;
//	}
//};
//
//
//int main()
//{
//	CFather* pcFather = new CSon;
//
//	delete pcFather;
//
//	return 0;
//}
/*
	1. 默认拷贝构造函数存在的一个问题
		当类中存在指针变量的时候，默认拷贝构造函数，会直接复制指针的值，使得多个指针变量指向同一块空间。
		如果析构函数去delete释放这块地址，会导致同一个地址被释放多次，会导致程序崩溃

	2. 如何解决这个问题？
		自定义拷贝构造函数，在该函数内部，去申请单独的空间，使得每个对象的指针成员变量，指向不同的地址。
		这样析构函数去delete释放空间的时候，就不会有问题

*/

//#include <iostream>
//using namespace std;
//
//class Cstudent
//{
//public:
//	char name[32];
//	char* paddr;
//
//	// 定义构造函数
//	Cstudent()
//	{
//		paddr = new char[32];
//		strncpy(paddr, "China Shanghai", 32);
//	}
//
//	// 定义拷贝构造函数
//	Cstudent(const Cstudent& a)
//	{
//		this->paddr = new char[32];
//		strcpy(this->paddr, a.paddr);
//	}
//
//	// 定义析构函数
//	~Cstudent()
//	{
//		delete[] paddr;
//	}
//};
//
//
//int main()
//{
//	Cstudent cTom;
//	cout << cTom.paddr << endl;
//
//	Cstudent cJack = cTom;   // 这里会调用系统默认的拷贝构造函数
//	cout << cJack.paddr << endl;
//
//	// 打印地址
//	printf("0x%p\n", cTom.paddr);
//	printf("0x%p\n", cJack.paddr);
//
//	strcpy(cJack.paddr, "USA");
//	cout << cJack.paddr << endl;
//	cout << cTom.paddr << endl;
//
//	return 0;
//}
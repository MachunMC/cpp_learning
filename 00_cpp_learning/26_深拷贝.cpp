/*
	1. Ĭ�Ͽ������캯�����ڵ�һ������
		�����д���ָ�������ʱ��Ĭ�Ͽ������캯������ֱ�Ӹ���ָ���ֵ��ʹ�ö��ָ�����ָ��ͬһ��ռ䡣
		�����������ȥdelete�ͷ�����ַ���ᵼ��ͬһ����ַ���ͷŶ�Σ��ᵼ�³������

	2. ��ν��������⣿
		�Զ��忽�����캯�����ڸú����ڲ���ȥ���뵥���Ŀռ䣬ʹ��ÿ�������ָ���Ա������ָ��ͬ�ĵ�ַ��
		������������ȥdelete�ͷſռ��ʱ�򣬾Ͳ���������

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
//	// ���幹�캯��
//	Cstudent()
//	{
//		paddr = new char[32];
//		strncpy(paddr, "China Shanghai", 32);
//	}
//
//	// ���忽�����캯��
//	Cstudent(const Cstudent& a)
//	{
//		this->paddr = new char[32];
//		strcpy(this->paddr, a.paddr);
//	}
//
//	// ������������
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
//	Cstudent cJack = cTom;   // ��������ϵͳĬ�ϵĿ������캯��
//	cout << cJack.paddr << endl;
//
//	// ��ӡ��ַ
//	printf("0x%p\n", cTom.paddr);
//	printf("0x%p\n", cJack.paddr);
//
//	strcpy(cJack.paddr, "USA");
//	cout << cJack.paddr << endl;
//	cout << cTom.paddr << endl;
//
//	return 0;
//}
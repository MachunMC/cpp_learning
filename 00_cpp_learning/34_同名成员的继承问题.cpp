/*
	������͸����У���ͬ���ĳ�Աʱ��C++��ȡ���ǵķ�ʽ���д���
	1. ���ݳ�Աͬ��
		���������ڻ������⣬���û��ָ�����������򣬱�ʾ���Ǹ����еĳ�Ա��
		�����������ʹ�ø���ĳ�Ա����Ҫָ������������

	2. ������Աͬ��
		(1) �������Ͳ�������ͬ��ͬ��
		(2) ��������ͬ��������ͬ��ʹ�ø����еĳ�Ա����ʱ����Ҫָ�����������򣬷���ᱨ��
			ע�⣺����͸����е�ͬ���������������غ���

*/

//#include <iostream>
//using namespace std;
//
//// ���常��
//class CFather
//{
//public:
//	int age;
//
//	CFather()
//	{
//		age = 52;
//	}
//
//	void func(void)
//	{
//		cout << "CFather age:" << age << endl;
//	}
//
//	void func1(int a)
//	{
//		cout << "CFather func1" << endl;
//	}
//};
//
//// ��������
//class CSon : public CFather
//{
//public:
//	int age;
//
//	CSon()
//	{
//		age = 26;
//	}
//
//	void func(void)
//	{
//		cout << "CSon age:" << age << endl;				// ����������������еĳ�Ա����age
//		cout << "CFather age:" << CFather::age << endl; // �������ʹ�������������������ĳ�Ա����age
//	}
//
//	void func_test(void)
//	{
//		func();
//		CFather::func();
//	}
//
//	void func1(void)
//	{
//		cout << "CSon func1" << endl;
//	}
//};
//
//
//int main()
//{
//	CSon cTom;
//
//	// ���ݳ�Ա
//	cout << "Tom's age:" << cTom.age << endl;					// �����ʾ��������ĳ�Ա
//	cout << "Tom's father's age:" << cTom.CFather::age << endl;	// ����ʹ�ø���ĳ�Ա����Ҫָ������������
//	cout << endl;
//
//
//	// ������Ա���������Ͳ�������ͬ
//	//cTom.func_test();
//	cTom.func();
//	cTom.CFather::func();
//	cout << endl;
//
//
//	// ������Ա����������ͬ��������ͬ
//	cTom.func1();
//	cTom.CFather::func1(123);
//
//	return 0;
//}
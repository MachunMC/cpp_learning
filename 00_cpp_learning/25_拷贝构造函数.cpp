/*
	1. �������캯����Ҳ�и��ƹ��캯������һ������Ĺ��캯��

	2. �������캯������ʽ
		class_name(const class_name &a)
		{
			function body
		}

	3. �������캯��������
		Ĭ�ϵĿ������캯����������ƷǾ�̬��Ա��ֵ�����Ƶ��ǳ�Ա��ֵ����Ϊ��̬��Ա�������ж��������е�
		ϵͳĬ�ϵ�������ֽ���ǳ����

	4. �������캯��ɶʱ����ã�
		(1) �½�һ�����󣬲������ʼ��Ϊͬ�����ж���
			i. Cstudent cTom(cLucy);
			ii. Cstudent cTom = cLucy;
			iii. Cstudent *pcTom = new Cstudent(cLucy);
		(2) �����������ݶ����ֵ
		(3) �������ض����ֵ

*/


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
//
//	// ���幹�캯��
//	Cstudent()
//	{
//		cout << "���캯��" << endl;
//	}
//
//	// ���忽�����캯��
//	Cstudent(const Cstudent &a)
//	{
//		cout << "�������캯��" << endl;
//	}
//
//	// ������������
//	~Cstudent()
//	{
//		cout << "��������" << endl;
//	}
//};
//
//// �����������ݶ����ֵʱ�����ÿ������캯��
//void func(Cstudent a)
//{
//
//}
//
//// �������ض����ֵʱ�����ÿ������캯��
//Cstudent func1()
//{
//	Cstudent a;
//	return a;
//}
//
//int main()
//{
//	Cstudent cTom;
//	//Cstudent cLucy(cTom);
//	//Cstudent cJack = cTom;
//	Cstudent *pcMichael = new Cstudent(cTom);
//
//	//func(cTom);
//	cTom = func1();
//
//	return 0;
//}
/*
	1. thisָ������ã���������ͬ���ı���

	2. this��һ��class*���͵�ָ�������ָ��������Ķ���

	3. thisָ��������������ڲ��ĳ�Ա��������ϵͳĬ�ϵ���������

	4. ͨ��thisָ�룬���Եõ�����ĵ�ַ
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
//	// ���幹�캯��
//	Cstudent(int age)
//	{
//		//age = age;  // ���캯���β�age����ĳ�Ա����age������ͬ�ı��������ڹ��캯�����������ڣ��βα�������Ч��
//		//			  // ���������൱���β�age���β�age��ֵ
//		//cout << "���캯�� age:" << age << endl;   // �����age���Ǳ�ʾ���캯���β�age
//
//		// ����������ı�﷽ʽ
//		this->age = age;	// this��һ��Cstudent*���͵�ָ�������ָ��������Ķ������Կ�����thisָ�����ö���ĳ�Ա
//		cout << "���캯�� age:" << this->age << endl; 
//	}
//
//	void show_age()
//	{
//		//cout << "show age:" << age << endl;	  // �����age��ʾ��ĳ�Ա����age�����캯������Ա����age��ֵ��Ŀ��û�дﵽ
//		//									  // ���������ӡ��ageֵ���Ǻ͹��캯���е�ageֵ��ͬ
//
//		cout << "show age:" << this->age << endl;
//	}
//
//	Cstudent* get_addr()
//	{
//		return this;
//	}
//
//	// ��������������û���β�
//	~Cstudent()
//	{
//		cout << "��������called" << endl;
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
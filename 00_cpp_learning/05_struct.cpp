/*
   C++�еĽṹ�壬��C�����еĽṹ�壬����������
   1. C++�ж���ṹ�����������ʡ��struct�ؼ��֣�C���Բ���

   2. C++�ṹ���п��Զ��庯����C���Բ���
*/

#include <iostream>
using namespace std;

struct student
{
	int age;
	int score;

	// C++�ṹ���п��Զ��庯��
	void func(void)
	{
		cout << "age:" << age << ", score:" << score << endl;
	}
};

int main()
{
	student tTom;   // �������ʡ��struct �ؼ���

	tTom.age = 10;
	tTom.score = 99;
	tTom.func();	// ����ֱ�ӵ��ýṹ��ĺ�����Ա
	
	cout << "student tom info. age:" << tTom.age << ", score:" << tTom.score << endl;

	return 0;
}
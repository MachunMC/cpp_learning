/*
	1. ���캯����ʼ���б�
		(1) ��ʽ���������캯���Ĳ����б���棬�Ͳ����б������֮���� ":"�ָ�����ʼ������֮���� ","�ָ�
		(2) ���ã�����ĳ�Ա��������ʼ��
		(3) ��Чʱ�䣺�ڹ��캯������ǰִ��

	2. ��Ա������ʼ��˳��ֻ�ͱ�������˳���йأ�����ʼ���б�˳���޹�
*/


#include <iostream>
using namespace std;

struct student
{
	char name[32];
	char gender;
	int  age;
	int  score;
};

class Cteacher
{
public:
	char name[32];  // �ȳ�ʼ��
	char gender;	// �ڳ�ʼ��
	int  age;		// ���ų�ʼ��
	int  salary;	// ����ʼ��

	// ��ʼ���б�
	Cteacher():gender('M'), age(32), salary('c')
	{
		age = 30;
		salary = 20000;
	}

	void show()
	{
		cout << "gender:" << gender << endl;
		cout << "age:"    << age    << endl;
		cout << "salary:" << salary << endl;
	}
};

int main()
{
	student tMichael = { "Michael", 'M', 26, 100}; // �ṹ���ʼ��

	cout << "�ṹ���ʼ������" << endl;
	cout << "name:"   << tMichael.name   << endl;
	cout << "gender:" << tMichael.gender << endl;
	cout << "age:"    << tMichael.age    << endl;
	cout << "score:"  << tMichael.score  << endl;

	Cteacher cJack;

	cout << "teacher Jack infomation" << endl;
	cJack.show();

	return 0;
}
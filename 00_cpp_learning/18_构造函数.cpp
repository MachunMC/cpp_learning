/*
	1. ���캯�����ڶ��󴴽���ʱ�򣬻��Զ����ã�������Ա������ֵ
	2. ���캯����ʽ��
		����()
		{
			func_body��
		}

		(1) ���캯����������Ҫ����������һ��
		(2) ���캯��û�з���ֵ
*/

#include <iostream>
#include <cstring>
using namespace std;

class Cstudent
{
private:
	//int age = 10;	//�ڶ������ʱ�򣬲�Ҫ����ĳ�Ա��ֵ����Ϊ�����ڴ��в�ռ�ÿռ䡣�������еı������ᱨ���еĲ���
	int age;

protected:
	int score;

public:
	char gender;
	char name[32];
	char addr[32];

	Cstudent()
	{
		age = 10;
		score = 100;
		gender = 'M';
		strncpy(name, "xiaoming", sizeof(name));
		strncpy(addr, "shanghai", sizeof(addr));
	}
};

int main()
{
	Cstudent cTom;  // ���������ʱ�򣬻���ù��캯��
	Cstudent* pLucy = new Cstudent;  // Ϊ��������ڴ�ռ��ʱ�򣬻���ù��캯��

	cout << cTom.gender << endl;
	cout << cTom.addr << endl;

	return 0;
}
/*
	1. �����������ã��������ٵ�ʱ���Զ����ã���һЩ�����������ڴ���ͷ�

	2. ������������ʽ���Աȹ��캯����
		��1) ~����()
			{
				function body
			}
		 (2) ��������û�в���������û�����غ���
		 (3) ϵͳ��һ��Ĭ�ϵ���������������������ʲô������

*/


#include <iostream>
using namespace std;

class Cstudent
{
public:
	int age;
	char gender;

	// ���幹�캯��
	Cstudent()
	{
		cout << "����һ�����캯��" << endl;
	}

	// ������������
	~Cstudent()
	{
		cout << "����һ����������" << endl;
	}
};

int main()
{
	Cstudent cTom;					  // �ö���Ĺ��캯�����ڴ��������ʱ����ã��ö����������������return 0֮ǰ����
	Cstudent* pcLucy = new Cstudent;  // �ö���Ĺ��캯������new�����ʱ����ã��ö����������������delete�����ʱ�����

	delete pcLucy;	// delete������������

	Cstudent();		// ��ʱ����������ֻ����һ��

	cout << "��������" << endl;
	return 0;
}
/*
	1. ���������Ĺ��캯��
	2. �������Ĺ��캯������������ʱ��Ҫ���ݲ���Ĭ��ֵ
	3. ��Ĭ�ϲ����Ĺ��캯����������캯��ȫ����Ĭ��ֵ��������ɴ��ɲ���������������в�������Ĭ��ֵ������봫����Ӧ�Ĳ���
	4. ͬһ����Ĺ��캯�����Զ�������ɻ�Ϊ���غ��������������ݴ��ݵĲ��������������ĸ����캯��
	5. ������������û�й��캯����ϵͳ��Ĭ�����һ���յĹ��캯�����ú���û��ʵ�ʵ�����
		Ĭ�Ϲ��캯�����£�
		class_name()
		{

		}
		��������ӹ��캯��ʱ���¼ӵĹ��캯���Ḳ��ϵͳĬ�ϵĹ��캯��
	6. ��ĳ�Ա���������������ڶ��壻Ҳ���������ⶨ����������������ע��Ҫ����������������
*/

#include <iostream>
#include <cstring>
using namespace std;

class Cstudent
{
public:
	char name[32];
	char gender;
	int  age;
	int  score;

	// ���������Ĺ��캯��
	Cstudent()
	{
		strncpy(name, "michael", sizeof(name));
		gender = 'M';
		age = 26;
		score = 100;
	}

	// �������Ĺ��캯��
	// Cstudent(char *pchName, char g, int a, int s)
	// {
	// 	strncpy(name, pchName, sizeof(name));
	// 	gender = g;
	// 	age = a;
	// 	score = s;
	// }

	// ��Ĭ�ϲ����Ĺ��캯��
	Cstudent(char *pname, char g = 'M', int a = 26, int s = 99)
	{
		strncpy(name, pname, sizeof(name));
		gender = g;
		age = a;
		score = s;
	}

	void func(void); // ��Ա����������
};

void Cstudent::func(void) // ��Ա�����Ķ���
{
	cout << "��ĳ�Ա���������������ڶ��壻Ҳ���������ⶨ����������" << endl;
}

int main()
{
	char name[32] = "Michael";
	Cstudent cMichael(name, 'M', 26, 100);
	Cstudent* pLucy = new Cstudent(name, 'F', 23);  // ��̬����ռ�ʱ�����ݵĲ���ֵ�ŵ������

	cout << "name:"   << cMichael.name   << endl;
	cout << "gender:" << cMichael.gender << endl;
	cout << "age:"    << cMichael.age    << endl;
	cout << "score:"  << cMichael.score  << endl;

	cout << endl;
	cout << "name:"   << pLucy->name   << endl;
	cout << "gender:" << pLucy->gender << endl;
	cout << "age:"    << pLucy->age    << endl;
	cout << "score:"  << pLucy->score  << endl;
	
	cout << endl;
	cMichael.func();
	pLucy->func();

	return 0;
}
/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-07 08:04:11
 */
/*
	1. ɶ�Ǽ̳У�
		ĳ���������һЩ��ͬ���ԣ�ͬʱ�־����Լ����������ԡ�
		����Щ�������Ե�����Ϊһ���࣬�������ڴ˻����������Լ����������ԣ����ַ�ʽ�ͽ����̳С�
		���̳е���������࣬Ҳ�л��ࣻ�̳е���������࣬Ҳ��������

	2. �̳���ɶ���ã����Լ����ظ��Ĵ��룬��ߴ���������

	3. �̳е�д��

	4. �̳��޶��ʣ����ڸı������ж��ڸ����Ա�ķ�������
		public��������Σ��������
		protected�������public��Ա��������Ϊprotected
		private�������е�public��private��Ա��������Ϊprivate

	5. ��Ԫ�������ܱ��̳�
*/


#include <iostream>
#include <cstring>
using namespace std;

// ���常��
class Cpeople
{
public:
	char name[32];
	char gender;
	int age;

	Cpeople()
	{
		strncpy(name, "someone", sizeof(name));
		gender = 'M';
		age = 20;
	}

	void eat()
	{
		cout << "eat" << endl;
	}
};

// �������࣬Cchild �̳�Cpeople
class Cchild : public Cpeople  // �����public�����̳��޶��ʣ����ڸı�������ڸ����Ա�ķ�������
{
public:
	void GoToSchool()
	{
		cout << "go to school" << endl;
	}
};


// ��������
class CWorker : public Cpeople
{
public:
	void work()
	{
		cout << "work" << endl;
	}
};


int main()
{
	// ��������Ķ���
	Cchild cTom;
	CWorker cMichael;

	// ���������ø���ĳ�Ա
	cTom.GoToSchool();
	cTom.eat();
	cout << cTom.name   << " "
		 << cTom.gender << " "
		 << cTom.age    << endl;

	cout << endl;
	cMichael.work();
	cMichael.eat();
	cout << cMichael.name << " "
		<< cMichael.gender << " "
		<< cMichael.age << endl;

	return 0;
}
/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-06-03 16:50:11
 * @LastEditors: machun Michael
 * @LastEditTime: 2021-10-18 14:59:52
 */

/*
	1. ��Ԫ�ؼ��֣�friend

	2. ��Ԫ���������Է�������private��protected��Ա

	3. ��Ԫ�ࣺ���Է�������private��protected��Ա

	4. ��Ԫ��ȱ�㣺�ƻ�����ķ�װ�ԣ���������

*/

#include <iostream>
using namespace std;


class student
{
private:
	int age;

protected:
	int score;

public:
	char gender;
	char name[32];
	char addr[128];

	// ����print_info����Ϊ�������Ԫ�������Ϳ��Է������ڵ�private��protected��Ա
	friend void print_info(student* pCstu);
	friend int main();

	// ����HighSchoolStu��Ϊ�������Ԫ�࣬�Ϳ��Է������ڵ�private��protected��Ա
	friend class HighSchoolStu;			
};

class HighSchoolStu
{
public:
	char school[16];

	void func()
	{
		student Tom;
		Tom.age = 18;

		cout << Tom.age << endl;
	}
};


void print_info(student *pCstu)
{
	cout << "student info" << endl;
	cout << "name:"  << pCstu->name  << " "    
		 << "age:"   << pCstu->age   << " "			// �����޷�ֱ�ӷ���student���˽�г�Ա
		 << "score:" << pCstu->score << " "			// �����޷�ֱ�ӷ���student����ܱ�����Ա
		 << "addr:"  << pCstu->addr  << endl;
}

int main()
{
	student CTom;

	CTom.age = 12;
	CTom.score = 99;
	strncpy(CTom.name, "Tom", sizeof(CTom.name));
	strncpy(CTom.addr, "Tom", sizeof(CTom.addr));

	print_info(&CTom);

	cout << "friend" << endl;
	return 0;
}
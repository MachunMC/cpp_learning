/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-06-03 16:50:11
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-07 08:13:17
 */
/*
	1. �ࣺ������ͬ���Ժ���Ϊ�Ķ���ļ��ϡ��繷����һ���࣬������ɫ����С��Ʒ�ֵ����ԣ�ͬʱ���нС��ܡ��Է�����Ϊ
	   �������е�һ�������ĸ���

	2. ��Ķ��壺���巽ʽ�ͽṹ�����ƣ�ֻ�����ǹؼ��ֻ�����class���ṹ����һ���������

	3. ���ʹ�ã���������

	4. �������η�
		(1) ���ࣺ
			i) public�����еģ����ڳ�Ա���ⶼ�ɼ�
			ii) private��˽�еģ����ڳ�Ա���ڿɼ������ⲻ�ɼ������ӷ������η���Ĭ��Ϊprivate
				���಻�ɷ��ʸ����private��Ա
			iii) protected���ܱ����ģ����ڳ�Ա���ڿɼ������ⲻ�ɼ���������Է��ʸ����protected��Ա

		(2) ���÷�Χ���ӷ������η���ʼ������һ���������η���������Ľ�βΪֹ

		(3) �ṹ����һ��������࣬���Խṹ����Ҳ����ʹ�÷������η���
			���ṹ���Ա�ǿ���ֱ�ӷ��ʵģ����Խṹ���Ա��Ĭ��������publibc

*/

#include <iostream>
#include <cstring>
using namespace std;

// 2. ����һ���ࡣ���巽ʽ�ͽṹ�����ƣ�ֻ�����ǹؼ��ֲ�ͬ��struct������class���ṹ����һ���������
class CDog
{
private:			  // Ĭ��Ϊprivate
	int age;

public:
	char name[32+1];  // �������
	int color;

	void bark(void)   // �����Ϊ
	{
		cout << name << " wang wang!!" << endl;
	}
};

// C++�еĽṹ���Ա��Ҳ����ʹ�÷������η�
struct student
{
private:
	int age;

public:
	char gender;
	char name[32];
};

int main()
{
	CDog Tom;				  // ����һ��dog����
	CDog* pLucy = new CDog;   // newһ��dog����

	strncpy(Tom.name, "Tom", sizeof(Tom.name));
	// Tom.age = 2; // private��Ա��ֻ�����ڷ���
	Tom.color = 3;
	Tom.bark();

	// cout << Tom.age << endl; // private��Ա��ֻ�����ڷ���

	strncpy(pLucy->name, "Lucy", sizeof(pLucy->name));
	//pLucy->age = 1;
	pLucy->color = 3;
	pLucy->bark();

	// �ṹ��
	student Michael;
	//Michael.age = 26;
	Michael.gender = 'M';

	return 0;
}
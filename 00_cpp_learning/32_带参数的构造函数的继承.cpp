/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-12 08:08:30
 */

/*
	�������Ĺ��캯���в���������̳к���Ҫͨ�����๹�캯���ĳ�ʼ���б��������๹�캯������
*/

#include <iostream>
using namespace std;


// ����һ������
class CPeople
{
public:
	int salary;
	char gender;

	CPeople(int a, char b)
	{
		salary = a;
		gender = b;
		cout << "CPeople salary:" << a << endl;
	}
};

// ����һ������
class CWorker : public CPeople
{
public:
	int salary;

	// ͨ�����๹�캯���ĳ�ʼ���б��������๹�캯������
	CWorker(int a) : CPeople(a, 80)
	{
		salary = a;
		cout << "CWorker salary:" << salary << endl;
	}
};

int main()
{
	CWorker cTom(26);

	return 0;
}
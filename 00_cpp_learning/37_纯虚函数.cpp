/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-19 13:23:43
 */
/*
	1. ���麯��
		(1) ��ʽ��virtual void fun() = 0;
			���麯����ֵΪ0
		(2) �ص�
			i. �д��麯�����࣬�޷���������
			ii. �̳иø�������࣬�������д�ú�������Ҳ�޷���������

	2. �����ࣺ�д��麯������

	3. �ӿ��ࣺȫ�Ǵ��麯������

*/


#include <iostream>
using namespace std;

class CFather
{
public:
	void show()
	{
		cout << "hello father" << endl;
	}

	virtual void fun() = 0;  // ����һ�����麯��
};

class CSon : public CFather
{
public:
	void fun()
	{
		cout << "hello son" << endl;
	}
};


int main()
{
	// CFather cFather; // �д��麯�����࣬�޷���������
	CSon    cSon;

	cout << "���麯��" << endl;

	return 0;
}
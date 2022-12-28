/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-19 10:20:21
 */
/*
	1. ��̬��һ�ַ��ͱ��˼�룬��ͬ���Ĵ��룬ʵ�ֲ�ͬ�Ĺ��ܣ�
	   �����ָ�룬��������ĺ���

	2. �麯��
		(1) �ؼ��֣�virtual
		(2) ��������������ຯ���ĺ���������������������ֵҪһ��

	3. �����ָ�룬����ָ������Ķ��󣻷�֮����

	4. ��̬�����ø����ָ�룬�����ж��ֲ�ͬ��ִ��״̬���ɸ���ָ����ָ����������������
*/


#include <iostream>
using namespace std;

class CFather
{
public:
	virtual void show()
	{
		cout << "hello CFather show" << endl;
	}
};

class CSon : public CFather
{
public:
	void show()
	{
		cout << "hello CSon show" << endl;
	}
};

class CDaughter : public CFather
{
public:
	void show()
	{
		cout << "hello CDaughter show" << endl;
	}
};

int main()
{
	// �����ָ�룬����ָ������Ŀռ䣻��֮����
	CFather* pcFather0 = new CSon;
	CFather* pcFather1 = new CDaughter;
	//CSon* pcSon = new CFather;

	// ����virtual�ؼ��֣����õ��Ǹ����show����������virtual�ؼ��֣����õ��Ƕ�Ӧ�����show����
	pcFather0->show();	// ����CSon��show����
	pcFather1->show();  // ����CDaughter��show����

	// �ͷ��ڴ�
	delete pcFather0;
	delete pcFather1;

	return 0;
}
/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-12 07:58:08
 */

/*
	�̳еĹ��캯������˳���ȵ��ø��࣬�ٵ�������	
*/

#include <iostream>
using namespace std;


// ����һ�����ࣨ���ࣩ
class CPeople
{
public:
	CPeople()
	{
		cout << "CPeople" << endl;
	}
};

// ����һ�����࣬�̳�CPeople
class CWorker : public CPeople
{
public:
	CWorker()
	{
		cout << "CWorker" << endl;
	}
};

// ����һ�����࣬�̳�CWorker
class CTom : public CWorker
{
public:
	CTom()
	{
		cout << "CTom" << endl;
	}
};

int main()
{
	CWorker worker;

	cout << endl;
	CTom tom;

	return 0;
}
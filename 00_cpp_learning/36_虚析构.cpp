/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-19 11:10:33
 */
/*
	����������������������virtual�ؼ��֣���delete��ʱ�򣬲���������������������ֻ���ø��������
*/


#include <iostream>
using namespace std;

class CFather
{
public:
	virtual ~CFather()  // �������virtual�ؼ��֣���������������������
	{
		cout << "hello father" << endl;
	}
};

class CSon : public CFather
{
public:
	~CSon()
	{
		cout << "hello son" << endl;
	}
};


int main()
{
	CFather* pcFather = new CSon;

	delete pcFather;

	return 0;
}
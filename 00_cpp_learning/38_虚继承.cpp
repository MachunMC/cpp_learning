/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-19 13:29:13
 */
/*
	1. ��̳�����
		����A����һ������show������B�̳���A������CҲ�̳���A����һ������Dͬʱ�̳���B���C�࣬
		�������һ������ͨ���������show����ô�������ᱨ��"show"�ķ��ʲ���ȷ������

	2. ��̳У�Ϊ�˽����̳з��ʲ���ȷ������

	3. ������������

*/


#include <iostream>
using namespace std;

class CA
{
public:
	void show()
	{
		cout << "hello CA" << endl;
	}
};

// ��̳�
class CB : virtual public CA
{
public:

};

// ��̳�
class CC : virtual public CA
{
public:

};

class CD : public CB, public CC
{
public:

};

int main()
{
	CD cTmp;
	cTmp.show();

	return 0;
}
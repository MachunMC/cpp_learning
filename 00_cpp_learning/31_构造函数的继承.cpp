/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-12 07:58:08
 */

/*
	继承的构造函数调用顺序：先调用父类，再调用子类	
*/

#include <iostream>
using namespace std;


// 定义一个基类（父类）
class CPeople
{
public:
	CPeople()
	{
		cout << "CPeople" << endl;
	}
};

// 定义一个子类，继承CPeople
class CWorker : public CPeople
{
public:
	CWorker()
	{
		cout << "CWorker" << endl;
	}
};

// 定义一个子类，继承CWorker
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
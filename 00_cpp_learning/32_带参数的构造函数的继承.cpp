/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-12 08:08:30
 */

/*
	如果父类的构造函数有参数，子类继承后，需要通过子类构造函数的初始化列表，来给父类构造函数传参
*/

#include <iostream>
using namespace std;


// 定义一个父类
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

// 定义一个子类
class CWorker : public CPeople
{
public:
	int salary;

	// 通过子类构造函数的初始化列表，来给父类构造函数传参
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
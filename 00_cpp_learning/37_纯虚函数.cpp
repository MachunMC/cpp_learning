/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-19 13:23:43
 */
/*
	1. 纯虚函数
		(1) 形式：virtual void fun() = 0;
			给虚函数赋值为0
		(2) 特点
			i. 有纯虚函数的类，无法创建对象
			ii. 继承该父类的子类，如果不重写该函数，则也无法创建对象

	2. 抽象类：有纯虚函数的类

	3. 接口类：全是纯虚函数的类

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

	virtual void fun() = 0;  // 定义一个纯虚函数
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
	// CFather cFather; // 有纯虚函数的类，无法创建对象
	CSon    cSon;

	cout << "纯虚函数" << endl;

	return 0;
}
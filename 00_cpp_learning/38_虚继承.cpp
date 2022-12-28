/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-19 13:29:13
 */
/*
	1. 多继承问题
		父类A中有一个函数show，子类B继承了A，子类C也继承了A，有一个子类D同时继承了B类和C类，
		如果创建一个对象，通过对象调用show，那么编译器会报对"show"的访问不明确的问题

	2. 虚继承：为了解决多继承访问不明确的问题

	3. 父类叫做虚基类

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

// 虚继承
class CB : virtual public CA
{
public:

};

// 虚继承
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
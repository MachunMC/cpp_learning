/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-19 10:20:21
 */
/*
	1. 多态是一种泛型编程思想，即同样的代码，实现不同的功能；
	   父类的指针，调用子类的函数

	2. 虚函数
		(1) 关键字：virtual
		(2) 条件：父类和子类函数的函数名、函数参数、返回值要一致

	3. 父类的指针，可以指向子类的对象；反之不行

	4. 多态：调用父类的指针，可以有多种不同的执行状态，由父类指针所指向的子类对象所决定
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
	// 父类的指针，可以指向子类的空间；反之不行
	CFather* pcFather0 = new CSon;
	CFather* pcFather1 = new CDaughter;
	//CSon* pcSon = new CFather;

	// 不加virtual关键字，调用的是父类的show函数；加上virtual关键字，调用的是对应子类的show函数
	pcFather0->show();	// 调用CSon的show函数
	pcFather1->show();  // 调用CDaughter的show函数

	// 释放内存
	delete pcFather0;
	delete pcFather1;

	return 0;
}
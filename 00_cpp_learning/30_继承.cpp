/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-07 08:04:11
 */
/*
	1. 啥是继承？
		某几个类具有一些共同属性，同时又具有自己单独的属性。
		把这些共有属性单独作为一个类，其他类在此基础上增加自己的特有属性，这种方式就叫做继承。
		被继承的类叫做父类，也叫基类；继承的类叫做子类，也叫派生类

	2. 继承有啥作用：可以减少重复的代码，提高代码利用率

	3. 继承的写法

	4. 继承限定词：用于改变子类中对于父类成员的访问属性
		public：父类如何，子类如何
		protected：父类的public成员，子类中为protected
		private：父类中的public、private成员，子类中为private

	5. 友元函数不能被继承
*/


#include <iostream>
#include <cstring>
using namespace std;

// 定义父类
class Cpeople
{
public:
	char name[32];
	char gender;
	int age;

	Cpeople()
	{
		strncpy(name, "someone", sizeof(name));
		gender = 'M';
		age = 20;
	}

	void eat()
	{
		cout << "eat" << endl;
	}
};

// 定义子类，Cchild 继承Cpeople
class Cchild : public Cpeople  // 这里的public叫做继承限定词，用于改变子类对于父类成员的访问属性
{
public:
	void GoToSchool()
	{
		cout << "go to school" << endl;
	}
};


// 定义子类
class CWorker : public Cpeople
{
public:
	void work()
	{
		cout << "work" << endl;
	}
};


int main()
{
	// 定义子类的对象
	Cchild cTom;
	CWorker cMichael;

	// 子类对象调用父类的成员
	cTom.GoToSchool();
	cTom.eat();
	cout << cTom.name   << " "
		 << cTom.gender << " "
		 << cTom.age    << endl;

	cout << endl;
	cMichael.work();
	cMichael.eat();
	cout << cMichael.name << " "
		<< cMichael.gender << " "
		<< cMichael.age << endl;

	return 0;
}
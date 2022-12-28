/*
	1. 构造函数：在对象创建的时候，会自动调用，来给成员变量赋值
	2. 构造函数格式：
		类名()
		{
			func_body；
		}

		(1) 构造函数函数名，要和类名保持一致
		(2) 构造函数没有返回值
*/

#include <iostream>
#include <cstring>
using namespace std;

class Cstudent
{
private:
	//int age = 10;	//在定义类的时候，不要给类的成员赋值，因为类在内存中不占用空间。这样做有的编译器会报错，有的不会
	int age;

protected:
	int score;

public:
	char gender;
	char name[32];
	char addr[32];

	Cstudent()
	{
		age = 10;
		score = 100;
		gender = 'M';
		strncpy(name, "xiaoming", sizeof(name));
		strncpy(addr, "shanghai", sizeof(addr));
	}
};

int main()
{
	Cstudent cTom;  // 创建对象的时候，会调用构造函数
	Cstudent* pLucy = new Cstudent;  // 为对象分配内存空间的时候，会调用构造函数

	cout << cTom.gender << endl;
	cout << cTom.addr << endl;

	return 0;
}
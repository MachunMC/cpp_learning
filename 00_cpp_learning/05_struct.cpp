/*
   C++中的结构体，和C语言中的结构体，有两点区别。
   1. C++中定义结构体变量，可以省略struct关键字，C语言不行

   2. C++结构体中可以定义函数，C语言不行
*/

#include <iostream>
using namespace std;

struct student
{
	int age;
	int score;

	// C++结构体中可以定义函数
	void func(void)
	{
		cout << "age:" << age << ", score:" << score << endl;
	}
};

int main()
{
	student tTom;   // 这里可以省略struct 关键字

	tTom.age = 10;
	tTom.score = 99;
	tTom.func();	// 这里直接调用结构体的函数成员
	
	cout << "student tom info. age:" << tTom.age << ", score:" << tTom.score << endl;

	return 0;
}
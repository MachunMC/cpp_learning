/*
	1. 构造函数初始化列表
		(1) 形式：紧跟构造函数的参数列表后面，和参数列表的括号之间用 ":"分割，多个初始化参数之间用 ","分割
		(2) 作用：给类的成员变量做初始化
		(3) 生效时间：在构造函数调用前执行

	2. 成员变量初始化顺序，只和变量定义顺序有关，跟初始化列表顺序无关
*/


#include <iostream>
using namespace std;

struct student
{
	char name[32];
	char gender;
	int  age;
	int  score;
};

class Cteacher
{
public:
	char name[32];  // 先初始化
	char gender;	// 在初始化
	int  age;		// 接着初始化
	int  salary;	// 最后初始化

	// 初始化列表
	Cteacher():gender('M'), age(32), salary('c')
	{
		age = 30;
		salary = 20000;
	}

	void show()
	{
		cout << "gender:" << gender << endl;
		cout << "age:"    << age    << endl;
		cout << "salary:" << salary << endl;
	}
};

int main()
{
	student tMichael = { "Michael", 'M', 26, 100}; // 结构体初始化

	cout << "结构体初始化测试" << endl;
	cout << "name:"   << tMichael.name   << endl;
	cout << "gender:" << tMichael.gender << endl;
	cout << "age:"    << tMichael.age    << endl;
	cout << "score:"  << tMichael.score  << endl;

	Cteacher cJack;

	cout << "teacher Jack infomation" << endl;
	cJack.show();

	return 0;
}
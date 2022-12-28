/*
	1. 不带参数的构造函数
	2. 带参数的构造函数：定义对象的时候，要传递参数默认值
	3. 带默认参数的构造函数：如果构造函数全部有默认值，则参数可传可不传；如果不是所有参数都有默认值，则必须传递相应的参数
	4. 同一个类的构造函数可以多个，构成互为重载函数。编译器根据传递的参数，决定调用哪个构造函数
	5. 如果定义的类中没有构造函数，系统会默认添加一个空的构造函数，该函数没有实际的作用
		默认构造函数如下：
		class_name()
		{

		}
		当我们添加构造函数时，新加的构造函数会覆盖系统默认的构造函数
	6. 类的成员函数，可以在类内定义；也可以在类外定义类内声明，但是注意要加类的作用域运算符
*/

#include <iostream>
#include <cstring>
using namespace std;

class Cstudent
{
public:
	char name[32];
	char gender;
	int  age;
	int  score;

	// 不带参数的构造函数
	Cstudent()
	{
		strncpy(name, "michael", sizeof(name));
		gender = 'M';
		age = 26;
		score = 100;
	}

	// 带参数的构造函数
	// Cstudent(char *pchName, char g, int a, int s)
	// {
	// 	strncpy(name, pchName, sizeof(name));
	// 	gender = g;
	// 	age = a;
	// 	score = s;
	// }

	// 带默认参数的构造函数
	Cstudent(char *pname, char g = 'M', int a = 26, int s = 99)
	{
		strncpy(name, pname, sizeof(name));
		gender = g;
		age = a;
		score = s;
	}

	void func(void); // 成员函数的声明
};

void Cstudent::func(void) // 成员函数的定义
{
	cout << "类的成员函数，可以在类内定义；也可以在类外定义类内声明" << endl;
}

int main()
{
	char name[32] = "Michael";
	Cstudent cMichael(name, 'M', 26, 100);
	Cstudent* pLucy = new Cstudent(name, 'F', 23);  // 动态申请空间时，传递的参数值放到类后面

	cout << "name:"   << cMichael.name   << endl;
	cout << "gender:" << cMichael.gender << endl;
	cout << "age:"    << cMichael.age    << endl;
	cout << "score:"  << cMichael.score  << endl;

	cout << endl;
	cout << "name:"   << pLucy->name   << endl;
	cout << "gender:" << pLucy->gender << endl;
	cout << "age:"    << pLucy->age    << endl;
	cout << "score:"  << pLucy->score  << endl;
	
	cout << endl;
	cMichael.func();
	pLucy->func();

	return 0;
}
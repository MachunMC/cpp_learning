/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-06-03 16:50:11
 * @LastEditors: machun Michael
 * @LastEditTime: 2021-10-18 14:59:52
 */

/*
	1. 友元关键字：friend

	2. 友元函数：可以访问类内private和protected成员

	3. 友元类：可以访问类内private和protected成员

	4. 友元的缺点：破坏了类的封装性，尽量少用

*/

#include <iostream>
using namespace std;


class student
{
private:
	int age;

protected:
	int score;

public:
	char gender;
	char name[32];
	char addr[128];

	// 声明print_info函数为该类的友元函数，就可以访问类内的private和protected成员
	friend void print_info(student* pCstu);
	friend int main();

	// 声明HighSchoolStu类为该类的友元类，就可以访问类内的private和protected成员
	friend class HighSchoolStu;			
};

class HighSchoolStu
{
public:
	char school[16];

	void func()
	{
		student Tom;
		Tom.age = 18;

		cout << Tom.age << endl;
	}
};


void print_info(student *pCstu)
{
	cout << "student info" << endl;
	cout << "name:"  << pCstu->name  << " "    
		 << "age:"   << pCstu->age   << " "			// 这里无法直接访问student类的私有成员
		 << "score:" << pCstu->score << " "			// 这里无法直接访问student类的受保护成员
		 << "addr:"  << pCstu->addr  << endl;
}

int main()
{
	student CTom;

	CTom.age = 12;
	CTom.score = 99;
	strncpy(CTom.name, "Tom", sizeof(CTom.name));
	strncpy(CTom.addr, "Tom", sizeof(CTom.addr));

	print_info(&CTom);

	cout << "friend" << endl;
	return 0;
}
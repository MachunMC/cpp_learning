/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-06-03 16:50:11
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-07 08:13:17
 */
/*
	1. 类：具有相同属性和行为的对象的集合。如狗就是一个类，具有颜色、大小、品种等属性，同时具有叫、跑、吃饭等行为
	   对象：类中的一个单独的个体

	2. 类的定义：定义方式和结构体类似，只不过是关键字换成了class。结构体是一种特殊的类

	3. 类的使用（创建对象）

	4. 访问修饰符
		(1) 分类：
			i) public：公有的，类内成员内外都可见
			ii) private：私有的，类内成员类内可见，类外不可见。不加访问修饰符，默认为private
				子类不可访问父类的private成员
			iii) protected：受保护的，类内成员类内可见，类外不可见，子类可以访问父类的protected成员

		(2) 作用范围：从访问修饰符开始，到下一个访问修饰符，或者类的结尾为止

		(3) 结构体是一种特殊的类，所以结构体中也可以使用访问修饰符。
			而结构体成员是可以直接访问的，所以结构体成员的默认属性是publibc

*/

#include <iostream>
#include <cstring>
using namespace std;

// 2. 定义一个类。定义方式和结构体类似，只不过是关键字不同，struct换成了class。结构体是一种特殊的类
class CDog
{
private:			  // 默认为private
	int age;

public:
	char name[32+1];  // 类的属性
	int color;

	void bark(void)   // 类的行为
	{
		cout << name << " wang wang!!" << endl;
	}
};

// C++中的结构体成员，也可以使用访问修饰符
struct student
{
private:
	int age;

public:
	char gender;
	char name[32];
};

int main()
{
	CDog Tom;				  // 创建一个dog对象
	CDog* pLucy = new CDog;   // new一个dog对象

	strncpy(Tom.name, "Tom", sizeof(Tom.name));
	// Tom.age = 2; // private成员，只能类内访问
	Tom.color = 3;
	Tom.bark();

	// cout << Tom.age << endl; // private成员，只能类内访问

	strncpy(pLucy->name, "Lucy", sizeof(pLucy->name));
	//pLucy->age = 1;
	pLucy->color = 3;
	pLucy->bark();

	// 结构体
	student Michael;
	//Michael.age = 26;
	Michael.gender = 'M';

	return 0;
}
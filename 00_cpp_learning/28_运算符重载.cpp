/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-06 08:07:13
 */

/*
	1. 运算符重载的作用：赋予运算符自定义的功能，关键字 operator。参与运算的变量，至少有一个是类类型的；
	   运算符必须是有效的运算符

	2. 重载运算符左右两边的变量类型，需要和运算符重载函数的参数列表一一对应

	3. 运算符重载函数的返回值可以为void，也可以为int类型。当返回值为整形时，可以进行连续运算
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

	// 定义构造函数
	Cstudent()
	{
		strncpy(name, "michael", 32);
		gender = 'M';
		age = 27;
		score = 100;
	}
};

// 自定义运算符重载
void operator+(Cstudent &cstu, int num)
{
	cout << cstu.age + num << endl;
}

// 返回值类型为int，可以进行连续运算
int operator+(int num, Cstudent& cstu)
{
	return (num + cstu.score);
}


// 参数列表中，至少有一个是类类型，或者枚举类型
// void operator+(int a, int num)
// {
// 	cout << a + num << endl;
// }


int main()
{
	Cstudent cTom;

	cTom + 24;		// 没有定义运算符重载时，编译报错；定义运算符重载后，会执行到对应的运算符重载函数
	4 + cTom;	    // "+"左右两边的变量类型，需要和运算符重载函数一一对应
	// cTom + 24 + 1;  // 这里先计算cTom + 24，对应的执行cout输出，第一个运算符重载函数是void类型，
					  // 所以后面是void + 1，非法，所以编译报错

	cout << 24 + cTom + 25 << endl;  // 这里先计算24 + cTom，返回值为int类型的124，然后在执行124 + 25，所以输出149

	return 0;
}
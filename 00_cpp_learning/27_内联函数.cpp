/*
	1. 内联函数的原理
		常规函数调用时，会跳转到对应函数的位置，执行该函数；执行完毕后，再跳回刚才的位置，继续执行。
		而内联函数，是将要执行的函数内容，直接复制到该位置，执行过程中不需要跳转，直接执行，可以节省时间

	2. 内联函数的优缺点
		(1) 优点：指令执行过程中，不需要来回跳转，可以提高效率，节省时间
		(2) 缺点：每个执行函数的地方，都需要将整个函数的内容复制到该位置，代码中会多出很多该函数的备份，浪费内存
		所以内联函数是以空间换时间

	3. 内联函数的定义
		在定义函数时，返回值前加上inline关键字即可。
		如果有函数声明，函数声明的位置也要加上inline关键字

	4. 内联函数有啥需要注意的？
		(1) 函数体不能太大
		(2) 不能是递归函数
		(3) 内联函数依赖于编译器。
			有时候加了inline关键字，但编译器不会将该函数当做内联函数；
			有时候没有加inline关键字，但编译器也会将该函数当做内联函数

	5. 类和内联函数
		类内定义的函数，不管有没有加inline关键字，都是内联函数
*/


//#include <iostream>
//using namespace std;
//
//class Cstudent
//{
//public:
//	char name[32];
//	char gender;
//	int  age;
//	int  score;
//
//	void show_info()	// 虽然没有加inline关键字，但也是内联函数
//	{
//		cout << name << endl;
//		cout << gender << endl;
//		cout << age << endl;
//		cout << score << endl;
//	}
//};
//
//// 函数声明
//inline void func1();
//
//// 函数定义
//inline void func0()
//{
//	cout << "inline function 0" << endl;
//}
//
//int main()
//{
//	func0();
//	func1();
//
//	return 0;
//}
//
//inline void func1()
//{
//	cout << "inline function 1" << endl;
//}
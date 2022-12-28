/*
  不要返回局部变量的引用！！！
*/

//#include <iostream>
//using namespace std;
//
//// 这种写法是错误的！！！
//// a的局部变量，当函数返回时，a在内存中的地址就被释放了
//// 后面在main函数中引用a时，相当于访问非法地址，会发生不确定的错误
//int& func(void)
//{
//	int a = 12;
//	return a;
//}
//
//int main()
//{
//	int& b = func();  // 给局部变量a声明了一个引用b
//
//	cout << "b:" << b << endl;
//
//	b = 88;
//	cout << "b:" << b << endl;
//
//	return 0;
//}
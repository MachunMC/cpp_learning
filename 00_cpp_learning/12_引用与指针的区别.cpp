/*
	引用和指针的区别
	1. 引用在定义的时候必须初始化，指针不用

	2. 引用在初始化后就不能作为其他变量的引用了；而指针指向一个地址后，可以再指向其他地址

	3. 引用不占用内存空间，和被引用的变量占用同一块内存空间；指针占用单独的一块内存空间

	4. 引用的效率更高，因为是对变量的直接操作；而指针是间接操作

	5. 引用更安全，指针更灵活
*/


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "引用和指针的区别" << endl;
//	return 0;
//}
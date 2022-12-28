/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-06-03 16:50:11
 * @LastEditors: machun Michael
 * @LastEditTime: 2021-10-18 13:27:18
 */
/*
	C++内存的申请和释放
	1. 单个空间的申请和释放
		(1) 申请：new 数据类型
		    申请内存的同时，可以给这块内存赋值，格式：new 数据类型(初始值)
		(2) 释放：delete p

	2. 连续空间（数组）的申请和释放
		(1) 申请：new 数据类型[数组长度]
		(2) 释放：delete[] p     // 注意：这里delete后面要加方括号

	3. C++和C语言申请内存空间的区别和联系
		(1) C++中可以使用malloc和free
		(2) new和delete可以触发构造和析构，而malloc和free不行。
			new可以触发构造函数，delete可以触发析构函数
		(3) delete NULL是允许的，不会崩溃；而free一个空指针会导致崩溃
*/

#include <iostream>
using namespace std;

int main()
{
	// 1. 单个内存空间的申请和释放
	int* pu32Tmp0 = (int *)malloc(sizeof(int));  // C语言写法
	int* pu32Tmp1 = new int;					 // C++写法
	char* pchTmp2 = new char;
	//int* pchTmp2 = new char;	// 类型要匹配，否则编译会报错
	//char* pchTmp3 = new int;

	*pu32Tmp0 = 1;
	cout << "pu32Tmp0:" << pu32Tmp0 << ", pu32Tmp1:" << pu32Tmp1 << endl;
	cout << "*pu32Tmp0:" << *pu32Tmp0 << endl;

	delete pu32Tmp0;  //释放相应的内存
	delete pu32Tmp1;
	delete pchTmp2;

	// 申请内存的同时并赋值
	int* pTmp3 = new int(123);  
	char* pTmp4 = new char('M');

	cout << "pTmp3:" << *pTmp3 << endl;
	cout << "pTmp4:" << *pTmp4 << endl;

	delete pTmp3;
	delete pTmp4;

	// 2.连续空间（数组）的申请和释放
	int* pu32Buf = new int[5];  // 后面方括号表示申请一段数组空间，5表示数组长度
	pu32Buf[0] = 90;
	pu32Buf[1] = 91;
	pu32Buf[2] = 92;
	pu32Buf[3] = 93;
	pu32Buf[4] = 94;

	cout << "pu32Buf[0]:" << pu32Buf[0] << endl;
	cout << "pu32Buf[1]:" << pu32Buf[1] << endl;
	cout << "pu32Buf[2]:" << pu32Buf[2] << endl;
	cout << "pu32Buf[3]:" << pu32Buf[3] << endl;
	cout << "pu32Buf[4]:" << pu32Buf[4] << endl;

	delete[] pu32Buf; // 删除数组空间，delete后面要加上方括号

	return 0;
}
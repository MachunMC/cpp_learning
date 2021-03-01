#include <iostream>
using namespace std;


int main()
{
	int ival = 1.01;	// 可以，但是有告警，存在数据丢失
	//int& rval1 = 1.01;	// 错误，引用rval1必须先和一个变量绑定
	int& rval2 = ival;	// 正确
	//int& rval3;			// 错误，引用必须初始化


	/**********下列写法都对***********/
	int i = 0, & r1 = i;
	double d = 0, & r2 = d;
	r2 = 3.14159;
	r2 = r1;
	i = r2;
	r1 = d;

	return 0;
}
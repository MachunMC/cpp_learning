/*
	说明：cin是个对象，不是函数，也不是关键字
*/


#include <iostream>
using namespace std;

int main()
{
	int a;
	char b;
	double c;

	cout << "cin example" << endl;
	cout << "请输入3个数字，分别为int、char、double类型，中间用空格分开" << endl;
	cin >> a >> b >> c;
	cout << "输入结果为：" << a << " " << b << " " << c << endl;

	return 0;
}
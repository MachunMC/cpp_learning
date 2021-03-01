#include <iostream>
using namespace std;


int main()
{
	bool b = 42;			// b为TRUE
	int i = b;				// i为1

	cout << "b:" << b << endl;
	cout << "i:" << i << endl;

	i = 3.14;				// i为3
	double pi = i;			// pi为3.0
	unsigned char c1 = -1;	// c1为255
	signed char c2 = 256;	// c2为0

	cout << "i:" << i << endl;
	cout << "pi:" << pi << endl;
	printf("c1:%d, c2:%d\n", c1, c2);

	return 0;
}
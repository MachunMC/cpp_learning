#include <iostream>
using namespace std;


int main()
{
	bool b = 42;			// bΪTRUE
	int i = b;				// iΪ1

	cout << "b:" << b << endl;
	cout << "i:" << i << endl;

	i = 3.14;				// iΪ3
	double pi = i;			// piΪ3.0
	unsigned char c1 = -1;	// c1Ϊ255
	signed char c2 = 256;	// c2Ϊ0

	cout << "i:" << i << endl;
	cout << "pi:" << pi << endl;
	printf("c1:%d, c2:%d\n", c1, c2);

	return 0;
}
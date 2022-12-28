/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-19 11:10:33
 */
/*
	父类的析构函数，如果不加virtual关键字，在delete的时候，不会调用子类的析构函数，只调用父类的析构
*/


#include <iostream>
using namespace std;

class CFather
{
public:
	virtual ~CFather()  // 如果不加virtual关键字，不会调用子类的析构函数
	{
		cout << "hello father" << endl;
	}
};

class CSon : public CFather
{
public:
	~CSon()
	{
		cout << "hello son" << endl;
	}
};


int main()
{
	CFather* pcFather = new CSon;

	delete pcFather;

	return 0;
}
/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2022-11-27 19:53:00
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-11-27 22:59:23
 */

/*
 * 定义内联函数的几种方式：
 * 1. 只有定义，没有声明：在定义函数时加inline关键字
 * 2. 先声明，后定义：声明或定义前，只要一处有inline关键字就行，两处都有也行
*/
#include <iostream>

// 定义一个内联函数
// inline double square(double x) { return x * x; }  
inline double square(double x);

int main()
{
    using namespace std;
    double a = 0, b = 0;
    double c = 13.0;
    
    a = square(5.0);
    b = square(4.5 + 7.5);      // 可以传

    cout << "a = " << a << ", b = " << b << endl;
    cout << "c = " << c << ", c squared = " << square(c++) << endl;
    cout << "Now c = " << c << endl;

    return 0;
}

inline double square(double x) { return x * x; }
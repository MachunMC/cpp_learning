/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2022-12-19 14:16:54
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-28 21:07:28
 */
#include <iostream>
using namespace std;

// 利用函数模板，可以根据传递的参数，自动推导出参数类型
template<typename T> 
void func(T a)
{
    cout << a << endl;
}

int main()
{
    func(1);
    func(12.2);

    func<char>(123.1);  // 类型不匹配，编译不报错，而是做隐式转换
    func<>(123.1);

    return 0;
}
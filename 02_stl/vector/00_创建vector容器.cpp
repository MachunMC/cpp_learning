/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2022-12-19 16:12:20
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-19 16:32:19
 */
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    // 1. 创建一个空的容器，其中元素类型为int
    vector<int> a;

    // 2. 创建一个容器，同时给容器赋初值
    vector<double> b{1.1, 2.2, 3.3, 4.4};

    // 3. 创建一个容器，同时指定容器元素个数，这些元素的默认值为0
    // 也可以指定元素初始值
    vector<int> c(5);
    vector<int> d(8, 10);

    // 4. 创建一个容器，并用另一个容器给它赋值
    vector<int> e{1, 2, 3, 4, 5};
    vector<int> f(e);

    cout << "create vector" << endl;
    return 0;
}
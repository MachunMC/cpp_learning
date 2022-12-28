/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2022-12-19 16:33:18
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-20 14:07:08
 */
#include <iostream>
#include <vector>

using namespace std;

// 定义一个函数模板
template<typename T>
void traverse_vector(vector<T> &a)
{
    for (auto i = a.begin(); i < a.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

int main(void)
{
    vector<int> values{1, 2, 3, 4, 5, 6, 7, 8};

    traverse_vector(values);

    // 1. 在容器尾部新增一个元素
    values.push_back(99);
    traverse_vector(values);

    // 2. 从容器尾部删除一个元素
    values.pop_back();
    values.pop_back();
    traverse_vector(values);

    // 3. 在指定位置，插入一个元素
    // iterator insert (const_iterator position, const value_type& val); // C++11
    // values.insert(1, 100);  // 不能直接用数字当下标，第一个参数需要是一个iterator类型
    values.insert(values.begin(), 100);  // begin()返回的是iterator类型
    traverse_vector(values);

    values.insert(values.begin(), 200);
    traverse_vector(values);

    // 4. 判断容器是否为空，返回true or false
    vector<int> num;
    if (num.empty())
    {
        cout << "vector is empty" << endl;
    }
    else
    {
        cout << "vector no empty" << endl;
    }

    // 5. 返回容器元素个数
    cout << "vector values size:" << values.size() << endl;

    // 6. 清空容器
    values.clear();
    if (values.empty())
    {
        cout << "vector values is empty now" << endl;
    }
    else
    {
        cout << "vector values no empty now" << endl;
    }


    return 0;
}
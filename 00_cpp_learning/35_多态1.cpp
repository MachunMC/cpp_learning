/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2022-12-19 10:29:07
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-19 10:34:00
 */
#include <iostream>
using namespace std;

class CFather
{
public:
    virtual void show()
    {
        cout << "class CFather" << endl;
    }
};

class CSon : public CFather
{
public:
    void show()
    {
        cout << "class CSon" << endl;
    }
};

int main(void)
{
    // 父类的指针，指向子类的对象
    CFather *pf = new CSon;

    pf->show();  // CFather的成员函数不定义成虚函数，这里调用的就是父类的成员函数
                 // CFather的成员函数定义成虚函数，这里调用的就是指向的子类的成员函数


    return 0;
}
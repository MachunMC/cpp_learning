/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2022-12-07 07:57:31
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-12 07:50:22
 */

/*
    继承限定词：用于改变子类对父类成员的访问属性
    1. publibc：继承后，父类中是什么访问属性，在子类中就是什么属性

    2. protected：继承后，父类中的public降低为protected，protected和private属性不变

    // TODO:  这个含义不太明确
    3. private：继承后，父类成员对于子类而言，都是private
       子类类内可以访问父类的public和protected成员，类外都不能访问 
*/

#include <iostream>
using namespace std;

// 定义一个父类（基类）
class CPeople
{
public:
    void func_public()
    {
        cout << "Cpeople public" << endl;
    }

protected:
    void func_protected()
    {
        cout << "CPeople protected" << endl;
    }

private:
    void func_private()
    {
        cout << "CPeople private" << endl;
    }
};

// 定义一个子类
class CStudent : public CPeople
{
public:
    void func_Cstu()
    {
        func_public();
        func_protected();  // 父类可以访问子类的protected成员
        // func_private(); // 子类不能访问父类的private成员
    }
};

class CChild : protected CPeople
{
public:
    void func_cChild()
    {
        func_public();
        func_protected();
        // func_private();  // 子类不能访问父类的private成员
    }
};

class CTeacher : private CPeople
{
public:
    void func_teacher()
    {
        func_public();      // TODO: 这里为什么编译不报错？
        func_protected();   // TODO: 这里为什么编译不报错？
        // func_private();
    }
};


int main(void)
{
    CStudent xiaoming;
    xiaoming.func_public();
    // xiaoming.func_private();     // 父类private成员，子类类内类外都无法访问
    // xiaoming.func_protected();

    CChild liming;
    liming.func_cChild();
    // liming.func_public();  // 用protected限定词继承，父类中public属性降级为protected，子类在类外不能访问
    // liming.func_private(); 

    CTeacher Tom;
    // Tom.func_public();
    // Tom.func_protected();
    // Tom.func_private();

    return 0;
}
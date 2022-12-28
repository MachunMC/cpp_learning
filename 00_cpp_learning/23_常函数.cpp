 /*
    1. 常函数的形式：在类的成员函数参数列表后加上const，则该成员函数就是常函数
       构造函数和析构函数，不能是常函数

    2. 常函数可以使用类的数据成员，但是不能修改类的数据成员
 */

//#include <iostream>
//using namespace std;
//
//class Cstudent
//{
//public:
//    int  age;
//    char gender;
//    char name[32];
//
//    // 构造函数
//    Cstudent(int a)
//    {
//        age = a;
//        cout << "构造函数call" << endl;
//    }
//
//    Cstudent(int a, char b)
//    {
//        age = a;
//        gender = b;
//        strncpy(name, "michael", sizeof(name));
//
//        cout << "构造函数call" << endl;
//    }
//
//    // 定义一个常函数，则该函数内部无法修改类的成员变量的值
//    void show_info() const
//    {
//        //age = a;
//        cout << "name:"   << name   << " "
//             << "gender:" << gender << " "
//             << "age:"    << age    << endl;
//    }
//
//    void func()
//    {
//        cout << "this is not a const function" << endl;
//    }
//
//    // 析构函数
//    ~Cstudent()
//    {
//        cout << "析构函数call" << endl;
//    }
//};
//
//int main()
//{
//    Cstudent cMichael(26, 'M');
//    cMichael.show_info();
//
//    const Cstudent cTom(25);    // 定义一个const类型的对象
//    //cTom.func();    // 常对象不能调用普通函数，只能调用常函数
//    cTom.show_info();
//
//    cout << "const function" << endl;
//
//    return 0;
//}
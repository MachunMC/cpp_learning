 /*
    1. ����������ʽ������ĳ�Ա���������б�����const����ó�Ա�������ǳ�����
       ���캯�������������������ǳ�����

    2. ����������ʹ��������ݳ�Ա�����ǲ����޸�������ݳ�Ա
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
//    // ���캯��
//    Cstudent(int a)
//    {
//        age = a;
//        cout << "���캯��call" << endl;
//    }
//
//    Cstudent(int a, char b)
//    {
//        age = a;
//        gender = b;
//        strncpy(name, "michael", sizeof(name));
//
//        cout << "���캯��call" << endl;
//    }
//
//    // ����һ������������ú����ڲ��޷��޸���ĳ�Ա������ֵ
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
//    // ��������
//    ~Cstudent()
//    {
//        cout << "��������call" << endl;
//    }
//};
//
//int main()
//{
//    Cstudent cMichael(26, 'M');
//    cMichael.show_info();
//
//    const Cstudent cTom(25);    // ����һ��const���͵Ķ���
//    //cTom.func();    // �������ܵ�����ͨ������ֻ�ܵ��ó�����
//    cTom.show_info();
//
//    cout << "const function" << endl;
//
//    return 0;
//}
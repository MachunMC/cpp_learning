//#include <iostream>
//using namespace std;
//
//
//class Cstudent
//{
//public:
//	char name[32];
//	char gender;
//	int  age;
//	int  score;
//
//	// ���幹�캯��
//	Cstudent()
//	{
//		strncpy(name, "michael", 32);
//		gender = 'M';
//		age = 27;
//		score = 100;
//	}
//
//	// ���ڶ��������������Ĭ�ϵ�һ������Ϊthisָ�룬ָ��ö���������int a�ǵڶ�������
//	int operator+(int a) 
//	{
//		return (age + a);
//	}
//};
//
//
//// ��������ֻ��������
////int operator+(Cstudent &stu, int a, int b)
////{
////	return (stu.age + a);
////}
//
//
//int main()
//{
//	Cstudent cMichael;
//
//	cout << cMichael + 12 << endl;
//	//12 + cMichael;	// ����д������������ߵ��������Ͳ�ƥ��
//
//	return 0;
//}
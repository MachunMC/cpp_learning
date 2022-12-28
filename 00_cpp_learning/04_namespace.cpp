/*
  1. ���ܣ�����ͬ���ĺ����ͱ���

  2. ���������ռ�
	namespace �����ռ�����
	{
		void func(void)
		{
			cout << "hello namespace" << endl;
		}
	}
	ע�⣺����������üӷֺ�

	3. ʹ��
		(1) using namespace xxx���ڵ���ǰ������������ռ�
		(2) xxx::func()��ʹ������������� "::"����ʾʹ��xxx�����ռ��е�func����

*/


#include <iostream>
using namespace std;

namespace student
{
	void func(void)
	{
		cout << "hello student namespace" << endl;
	}
}

namespace teacher
{
	void func(void)
	{
		cout << "hello teacher namespace" << endl;
	}
}

int main()
{
	using namespace student; // �������ռ�
	func();

	using namespace teacher;
	//func();				// ֱ������д����֪��ʹ�õ��ĸ������ռ����func����
	teacher::func();		// ��Ҫ���������������

	return 0;
}
/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-08-03 20:46:45
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-06 08:07:13
 */

/*
	1. ��������ص����ã�����������Զ���Ĺ��ܣ��ؼ��� operator����������ı�����������һ���������͵ģ�
	   �������������Ч�������

	2. ����������������ߵı������ͣ���Ҫ����������غ����Ĳ����б�һһ��Ӧ

	3. ��������غ����ķ���ֵ����Ϊvoid��Ҳ����Ϊint���͡�������ֵΪ����ʱ�����Խ�����������
*/


#include <iostream>
#include <cstring>
using namespace std;


class Cstudent
{
public:
	char name[32];
	char gender;
	int  age;
	int  score;

	// ���幹�캯��
	Cstudent()
	{
		strncpy(name, "michael", 32);
		gender = 'M';
		age = 27;
		score = 100;
	}
};

// �Զ������������
void operator+(Cstudent &cstu, int num)
{
	cout << cstu.age + num << endl;
}

// ����ֵ����Ϊint�����Խ�����������
int operator+(int num, Cstudent& cstu)
{
	return (num + cstu.score);
}


// �����б��У�������һ���������ͣ�����ö������
// void operator+(int a, int num)
// {
// 	cout << a + num << endl;
// }


int main()
{
	Cstudent cTom;

	cTom + 24;		// û�ж������������ʱ�����뱨��������������غ󣬻�ִ�е���Ӧ����������غ���
	4 + cTom;	    // "+"�������ߵı������ͣ���Ҫ����������غ���һһ��Ӧ
	// cTom + 24 + 1;  // �����ȼ���cTom + 24����Ӧ��ִ��cout�������һ����������غ�����void���ͣ�
					  // ���Ժ�����void + 1���Ƿ������Ա��뱨��

	cout << 24 + cTom + 25 << endl;  // �����ȼ���24 + cTom������ֵΪint���͵�124��Ȼ����ִ��124 + 25���������149

	return 0;
}
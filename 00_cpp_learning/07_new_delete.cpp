/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2021-06-03 16:50:11
 * @LastEditors: machun Michael
 * @LastEditTime: 2021-10-18 13:27:18
 */
/*
	C++�ڴ��������ͷ�
	1. �����ռ��������ͷ�
		(1) ���룺new ��������
		    �����ڴ��ͬʱ�����Ը�����ڴ渳ֵ����ʽ��new ��������(��ʼֵ)
		(2) �ͷţ�delete p

	2. �����ռ䣨���飩��������ͷ�
		(1) ���룺new ��������[���鳤��]
		(2) �ͷţ�delete[] p     // ע�⣺����delete����Ҫ�ӷ�����

	3. C++��C���������ڴ�ռ���������ϵ
		(1) C++�п���ʹ��malloc��free
		(2) new��delete���Դ����������������malloc��free���С�
			new���Դ������캯����delete���Դ�����������
		(3) delete NULL������ģ������������freeһ����ָ��ᵼ�±���
*/

#include <iostream>
using namespace std;

int main()
{
	// 1. �����ڴ�ռ��������ͷ�
	int* pu32Tmp0 = (int *)malloc(sizeof(int));  // C����д��
	int* pu32Tmp1 = new int;					 // C++д��
	char* pchTmp2 = new char;
	//int* pchTmp2 = new char;	// ����Ҫƥ�䣬�������ᱨ��
	//char* pchTmp3 = new int;

	*pu32Tmp0 = 1;
	cout << "pu32Tmp0:" << pu32Tmp0 << ", pu32Tmp1:" << pu32Tmp1 << endl;
	cout << "*pu32Tmp0:" << *pu32Tmp0 << endl;

	delete pu32Tmp0;  //�ͷ���Ӧ���ڴ�
	delete pu32Tmp1;
	delete pchTmp2;

	// �����ڴ��ͬʱ����ֵ
	int* pTmp3 = new int(123);  
	char* pTmp4 = new char('M');

	cout << "pTmp3:" << *pTmp3 << endl;
	cout << "pTmp4:" << *pTmp4 << endl;

	delete pTmp3;
	delete pTmp4;

	// 2.�����ռ䣨���飩��������ͷ�
	int* pu32Buf = new int[5];  // ���淽���ű�ʾ����һ������ռ䣬5��ʾ���鳤��
	pu32Buf[0] = 90;
	pu32Buf[1] = 91;
	pu32Buf[2] = 92;
	pu32Buf[3] = 93;
	pu32Buf[4] = 94;

	cout << "pu32Buf[0]:" << pu32Buf[0] << endl;
	cout << "pu32Buf[1]:" << pu32Buf[1] << endl;
	cout << "pu32Buf[2]:" << pu32Buf[2] << endl;
	cout << "pu32Buf[3]:" << pu32Buf[3] << endl;
	cout << "pu32Buf[4]:" << pu32Buf[4] << endl;

	delete[] pu32Buf; // ɾ������ռ䣬delete����Ҫ���Ϸ�����

	return 0;
}
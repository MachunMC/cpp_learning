/*
	�������͵�����
	1. һά���������

	2. ��ά���������

	3. ָ�������
*/


#include <iostream>
using namespace std;

int main()
{
	// 1. һά���������
	int i = 0, j = 0;
	int u32Buf1[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	int (&Refu32Buf1)[16] = u32Buf1;  // ������һ��һά��������ñ���
	//int (&pu32Tmp)[18] = u32Buf1;   // ���鳤�Ȳ�һ�»ᱨ��

	for (i = 0; i < 16; i++)
	{
		cout << "u32Buf1["    << i << "]:" << u32Buf1[i]    << " "
			 << "Refu32Buf1[" << i << "]:" << Refu32Buf1[i] << endl;
	}

	// 2. ��ά���������
	cout << endl;

	int u32Buf2[5][6];
	int (&Refu32Buf2)[5][6] = u32Buf2;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			u32Buf2[i][j] = i*5 + j;
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			cout << "u32Buf2["    << i << "][" << j << "]" << u32Buf2[i][j]    << " "
				 << "Refu32Buf2[" << i << "][" << j << "]" << Refu32Buf2[i][j] << " " << endl;
		}
	}

	// 3. ָ�������
	cout << endl;
	char byGender = 'M';
	char* pbyTmp = &byGender;
	char* &RefTmp = pbyTmp;
	
	cout << "byGender:" << byGender << " "
		 << "*pbyTmp:"  << *pbyTmp  << " "
		 << "RefTmp:"   << *RefTmp  << endl;

	return 0;
}
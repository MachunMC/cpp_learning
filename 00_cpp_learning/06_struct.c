#include <stdio.h>

struct student
{
	int age;
	int score;

	/* c���Խṹ���У����ܶ��庯����Ա
	void func(void)
	{
		printf("hello\n");
	}
	*/
};

int main(void)
{
	struct student tTom;
	//student tTom;	//����struct�ؼ��ֱ���ᱨ��


	tTom.age = 10;
	tTom.score = 99;

	printf("student tom info. age:%d, score:%d\n", tTom.age, tTom.score);

	return 0;
}
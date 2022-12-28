#include <stdio.h>

struct student
{
	int age;
	int score;

	/* c语言结构体中，不能定义函数成员
	void func(void)
	{
		printf("hello\n");
	}
	*/
};

int main(void)
{
	struct student tTom;
	//student tTom;	//不加struct关键字编译会报错


	tTom.age = 10;
	tTom.score = 99;

	printf("student tom info. age:%d, score:%d\n", tTom.age, tTom.score);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char ch='F';
	int i,j;
	//puts("请输入一个大写字母");
	//scanf_s("%s", &ch)*/;
	for (i = 0; i <= ch - 'A'; i++)
	{
		for (j = 1; j <= i; j++)
			printf("_");
		for (j = 0; j <= i; j++)
			putchar(ch - j);
		printf("\n");
	}
	return 0;
}
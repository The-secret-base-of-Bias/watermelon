#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i,j,pro;
	for (i = 1; i <= 9; i++)
	{		
			for (j = 1; j <= i; j++)
			{
				pro = i * j;
				printf("%dx%d=%d\t", j, i, pro);
			}		
		printf("\n");
	}
	return 0;
}
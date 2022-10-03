#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define weight 3e-23
#define kuatuo 950
int main()
{
	float b,c;
	int a=0;
	b = kuatuo / weight;
	puts("输入水的夸脱数");
	scanf("%d/n", &a);
	c = a * b;
	printf("包含的水分子数=%e", c);
	return 0;

}
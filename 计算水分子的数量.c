#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define weight 3e-23
#define kuatuo 950
int main()
{
	float b,c;
	int a=0;
	b = kuatuo / weight;
	puts("����ˮ�Ŀ�����");
	scanf("%d/n", &a);
	c = a * b;
	printf("������ˮ������=%e", c);
	return 0;

}
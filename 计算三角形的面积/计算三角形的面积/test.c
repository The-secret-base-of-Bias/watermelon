#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

float a, b, c, p, s, i;

void calculated_area()
{
	p = (a + b + c) / 2;
	i = p * (p - a) * (p - b) * (p - c);
	s = sqrt(i);
	printf("三角形的面积=%.2f\n", s);
}
int main()
{
	while (1)
	{
		puts("请输入a:");
		scanf("%f", &a);
		puts("请输入b:");
		scanf("%f", &b);
		puts("请输入c:");
		scanf("%f", &c);
		if ((a + b) > c && (a + c) > b && (b + c) > a)
			calculated_area();
		else
			printf("三角形的三条边条边的输入有误，请重新输入\n");
	}
	return 0;
}

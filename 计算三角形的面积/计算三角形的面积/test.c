#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

float a, b, c, p, s, i;

void calculated_area()
{
	p = (a + b + c) / 2;
	i = p * (p - a) * (p - b) * (p - c);
	s = sqrt(i);
	printf("�����ε����=%.2f\n", s);
}
int main()
{
	while (1)
	{
		puts("������a:");
		scanf("%f", &a);
		puts("������b:");
		scanf("%f", &b);
		puts("������c:");
		scanf("%f", &c);
		if ((a + b) > c && (a + c) > b && (b + c) > a)
			calculated_area();
		else
			printf("�����ε����������ߵ�������������������\n");
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
		 printf("%d",i);	
		 break;
		}
		

	}
	if (i == sz)
		printf("ÕÒ²»µ½\n");

	return 0;
}
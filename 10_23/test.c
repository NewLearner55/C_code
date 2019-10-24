#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//求十个数里的最大值
	int max = -1;
	int i = 0;
	int arr[] = { 4, 3, 2, 0, 1, 5, 6, 7, 8, 9 };
	for (i = 0; i < 10; i++)
	{
		if (arr[i] >max)
		{
			max = arr[i];
		}
	}
	printf("min=%d\n", max);
	return 0;
}
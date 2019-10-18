#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//将数组A和数组B中的内容进行交换
	int i = 0;
	int tmp = 0;
	int sz = 0;
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 6, 7, 8, 9, 10 };
	sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
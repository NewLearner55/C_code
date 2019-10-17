#include<stdio.h>
int main()
{
	//判断只有一个元素出现一次，其他都是成对出现
	int arr[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	printf("%d\n", ret);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right =sz-1;
//	while (left < right)
//	{
//		int tmp = 0;
//		while ((left<right)&&arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while ((left<right)&&arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int Find(int arr[3][3], int row, int col, int k)
{
	int x = 0;
	int y = 2;

	while (x<row && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			return 1;
		}
	}
		return 0;
	}
int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int ret = Find(arr, 3, 3, 7);
	if (ret == 1)
		printf("找到了\n");
	else
		printf("找不到\n");
	return 0;
}

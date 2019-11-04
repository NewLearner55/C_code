#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 17;

	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;

	//二分查找/折半查找
	while(left<=right)
	{
		int mid = (left+right)/2;
		if(arr[mid] > k)
		{
			right = mid-1;
		}
		else if(arr[mid] < k)
		{
			left = mid+1;
		}
		else
		{
			printf("找到了:%d\n", mid);
			break;
		}
	}
	//
	if(left>right)
	{
		printf("很遗憾，找不到\n");
	}

	return 0;
}
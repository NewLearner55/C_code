#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void find_two_diff_num(int arr[], int sz, int*p1, int *p2)
{
	int ret = 0;
	int pos = 0; int i = 0;
	for(i=0; i<sz; i++)
	{
		ret ^= arr[i];
	}
	//2. �ҳ����������һλΪ1
	for(i=0; i<32; i++)
	{
		if(((ret >> i)&1)==1)
		{
			pos = i;
			break;
		}
	}
	//3. ����
	for(i=0; i<sz; i++)
	{
		if(((arr[i]>>pos)&1) == 1)
			*p1 ^= arr[i];
	}
	*p2 = *p1^ret;
}

int main()
{
	int arr[] = {1,2,3,4,1,2,3,4,5,6};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	//�����Ͳ���
	find_two_diff_num(arr, sz, &num1, &num2);
	printf("num1 = %d num2 = %d\n", num1, num2);

	//1 1 2 2 3 3 4 4 5 6
	//5^6
	//101
	//110
	//
	//1 1 4 4 5
	//2 2 3 3 6
	//011
	
	return 0;
}
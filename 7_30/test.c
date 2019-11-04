#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>


//a b c d
//d b c a

void left_move(char arr[], int k)
{
	int i = 0;
	int len = strlen(arr);
	for(i=0; i<k; i++)
	{
		//左旋转1个字符
		int j = 0;
		//1. 保存第一个
		char tmp = arr[0];
		//2. 向前移动
		for(j=0; j<len-1; j++)
		{
			arr[j] = arr[j+1];
		}
		//3. 把第一个放在最后的位置
		arr[len-1] = tmp;
	}
}

//void reverse(char*left, char*right)
//{
//	assert(left && right);
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	reverse(arr, arr+k-1);
//	reverse(arr+k, arr+len-1);
//	reverse(arr, arr+len-1);
//}


int main()
{
	char arr[] = "abcdef";
	//cdefab
	left_move(arr, 2);
	printf("%s\n", arr);
	return 0;
}
#include<stdio.h>
//数组和指针存放字符串的区别
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("arr1==arr2");
//	}
//	else
//	{
//		printf("arr1!=arr2");
//	}
//	return 0;
//}
int main()
{
	const char *p1 = "abcdef";
	const char *p2 = "abcdef";
	if (p1 == p2)
	{
		printf("p1==p2");
	}
	else
	{
		printf("p1!=p2");
	}
	return 0;
}
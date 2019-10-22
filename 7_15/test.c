#include<stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));
}
int main()
{
	//sizeof与数组的关系
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	test1(arr);
	test2(ch);
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	return 0;
}
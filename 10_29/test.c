#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//三个数从大到小排序
	int a = 3;
	int b = 5;
	int c = 4;
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a,b,c);
	return 0;
}




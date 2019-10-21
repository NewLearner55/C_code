#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//º∆À„3+33+333+3333+33333
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int tmp = 0;
	scanf("%d%d", &a, &n);//3 5
	for (i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("sum = %d\n", sum);
	return 0;
}
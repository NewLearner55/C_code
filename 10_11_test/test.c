#include<stdio.h>
int main()
{
	//1£¡+2!+3!+...+10£¡
	int i = 0;
	int j = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 2; i++)
	{
		ret = ret*i;
		sum = sum + ret;
	}
	printf("%d\n", sum);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//Ë®ÏÉ»¨Êý
int main()
{
	int i = 0;
	for (i = 0; i <= 1000000; i++)
	{
		int count = 1;
		int sum = 0;
		int tmp = i;
		while (tmp = tmp/10)
		{
			count++;
		}
		tmp = i;
		while (tmp)
		{
			sum +=(int)pow(tmp%10, count);
			tmp/=10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
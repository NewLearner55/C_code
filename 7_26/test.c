#include<stdio.h>
int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	for (i = 1; i <= line; i++)
	{
		int j = 0;
		for (j = 1; j <=line-i ; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= line - 1; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * (line - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}







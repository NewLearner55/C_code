#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	int j = 0;
	for (i = 1; i <= line; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" %d*%d=%2d", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


//void print_table(int line)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= line; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf(" %d*%d=%2d", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int line=0 ;
//	scanf("%d", &line);
//	print_table(line);
//	return 0;
//}
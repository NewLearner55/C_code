#include<stdio.h>
int main()
{
		//Ñî»ÔÈı½Ç
		//   1
		// 1   1
		//1  2  1
		//1 3  3  1
		//1 4 6 4 1
		//1 5 10 10 
		int arr[10][10] = { 0 };
		int i = 0;
		int j = 0;
		int k = 0;
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					arr[i][j] = 1;
				}
				if (j == 0)
				{
					arr[i][j] = 1;
				}
				if (i >= 2 && j >= 1)
				{
				arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
				}
			}
		}
		for (i = 0; i < 10; i++)
		{
			for (k = 1; k <=10-i; k++)
			{
				printf(" ");
			}
			for (j = 0; j <= i; j++)
			{ 
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	return 0;
}

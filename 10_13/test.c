#include<stdio.h>
int main()
{
	//�ж�1000-2000��֮�������
	int year = 0;
	for (int year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d ", year);
			}
		}
		if (year % 400 == 0)
		{
			printf("%d ", year);
		}
	}
	return 0;
}

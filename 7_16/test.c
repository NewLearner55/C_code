#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//Çó1/1-1/2+1/3-1/4+...+1/99-1/100µÄÖµ
	int i = 0;
	double sum = 0.0;
	int j = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + 1.0 / i*j;
		j = -j;
	}
	printf("%lf\n", sum);
	return 0;
}
	
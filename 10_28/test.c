#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int count_one_bit(int n)
{
	int count = 0;
	while(n)
	{
		n = n&(n-1);
		count++;
	}
	return count;
}
int main()
{
	int m = 1999;
	int n = 2299;
	int tmp = m^n;
	printf("%d\n", count_one_bit(tmp));
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//���������Լ��
	int m = 24;
	int n = 18;
	int tmp = 0;
	while (tmp=m%n)
	{
		m = n;
		n = tmp;
	}
	printf("%d\n", n);
	return 0;
}
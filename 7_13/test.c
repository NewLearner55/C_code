#include<stdio.h>
int main()
{
	//��ƽ��ֵ�������㷨
	int a = 3;
	int b = 5;
	int avg = 0;
	avg = a + ((b - a) >> 1);
	avg = a + (b - a) / 2;
	avg = (a&b)+((a^b)>>1);
	printf("%d\n", avg);
	printf("%d\n", avg);
	printf("%d\n", avg);
	return 0;
}
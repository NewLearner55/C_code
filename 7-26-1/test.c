#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int avg = 0;
	avg = a + (b - a) / 2;//4
	avg = a + ((b - a) >> 1);//4
	//010   
	//001
	//011+001=100
	avg = (a&b) + ((a^b) >> 1);//4
	//011   011   001
	//101   101   010
	//001   110   011
	//001+011
	//100
	printf("%d\n", avg);
	printf("%d\n", avg);
	printf("%d\n", avg);
	return 0;
}
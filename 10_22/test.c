#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//交换两个变量的值
	int a = 100;
	int b = 200;
	/*int tmp = 0;
	tmp=a;
	a = b;
	b = tmp;
	printf("a=%d b=%d\n", a, b);*/
	//不能创建临时变量交换两变量的值
	/*a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d\n",a,b);*/
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
	return 0;
}
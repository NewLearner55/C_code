#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int check_sys()
{
	union
	{
		char c;
		int a;
	}u;
	u.a = 1;
	return u.c;
}
int main()
{
	if (check_sys() == 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}
	return 0;
}
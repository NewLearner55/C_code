#include<stdio.h>
int check_sys()
{
	union Un
	{
		char a;
		int b;
	}u;
	u.b = 1;
	return u.b;
}
int main()
{
	//大小端判断
	int a = 1;
	//char*pa = (char*)&a;
	int ret =check_sys();
	if ( ret== 1)
	{
		printf("大端\n");
	}
	else
		printf("小端\n");
	return 0;
}
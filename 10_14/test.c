#include<stdio.h>
int check_duan()
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
	//��С���ж�
	int a = 1;
	//char*pa = (char*)&a;
	int ret =check_duan();
	if ( ret== 1)
	{
		printf("���\n");
	}
	else
		printf("С��\n");
	return 0;
}

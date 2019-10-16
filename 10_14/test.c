#include<stdio.h>
//int check_duan()
//{
//	union Un
//	{
//		char a;
//		int b;
//	}u;
//	u.b = 1;
//	return u.b;
//}
int main()
{
	//大小端判断
	int a = 1;
	char*pa = (char*)&a;
	if (*pa == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	/*int ret =check_duan();
	if ( ret== 1)
	{
		printf("小端\n");
	}
	else
		printf("大端\n");
*/
	return 0;
}

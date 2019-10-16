#include<stdio.h>
void menu()
{
	printf("**********************************\n");
	printf("***  1.Add         2.Sub       ***\n");
	printf("***  3.Mul         4.Div       ***\n");
	printf("***  0.exit                    ***\n");
}
void Calu(int(*pfun)(x, y))
{
	//通过函数指针调用计算器函数功能
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数");
	scanf("%d%d", &x, &y);
	ret = pfun(x, y);
	printf("ret=%d\n", ret);
}
int Add(int x, int y)
{
	return x+y;
}
int Sub(int x, int y)
{
	return x-y;
}
int Mul(int x, int y)
{
	return x*y;
}
int Div(int x, int y)
{
	if(y == 0)
	{
		printf("输入违法.\n");
	}
	return x/y;
}
int main()
{
	//用函数指针的数组实现计算器功能
	//int x = 0;
	//int y = 0;
	int input = 0;
	//int ret = 0;
	//int(*pArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		/*printf("请选择两个操作数\n");
		scanf("%d%d", &x, &y);
		ret = pArr[input](x,y);
		printf("%d\n", ret);*/
		switch (input)
		{
		case 1:
			Calu(Add);
			break;
		case 2:
			Calu(Sub);
			break;
		case 3:
			Calu(Mul);
			break;
		case 4:
			Calu(Div);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
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
	//ͨ������ָ����ü�������������
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("����������������");
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
		printf("����Υ��.\n");
	}
	return x/y;
}
int main()
{
	//�ú���ָ�������ʵ�ּ���������
	//int x = 0;
	//int y = 0;
	int input = 0;
	//int ret = 0;
	//int(*pArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		/*printf("��ѡ������������\n");
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
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
#include<stdio.h>
void menu()
{
	printf("***********************************\n");
	printf("********      1.play       ********\n");
	printf("********      0.exit       ********\n");
	printf("***********************************\n");
}
//time_t
void game()
{
	//1. ����һ�������
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;
	//printf("ret = %d\n", ret);
	//RAND_MAX
	//2. ������
	while(1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if(guess < ret)
		{
			printf("��С��\n");
		}
		else if(guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ʱ���

	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
#include<windows.h>
int main()
{
	//�ַ��ƶ�������м�
	char arr1[] = "Welcome to Baoji";
	char arr2[] = "****************";
	int left = 0;
	int right = strlen(arr1)-1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}

	return 0;
}
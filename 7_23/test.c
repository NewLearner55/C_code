#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
#include<assert.h>
#include<string.h>
//int my_strcmp(const char* str1, const char *str2)
//{
//assert(str1 != '\0');
//assert(str2 != '\0');
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	//×Ö·û´®±È½Ï
//	char* str1 = "abcdef";
//	char* str2 = "abc";
//	int ret = my_strcmp(str1, str2);
//	printf("%d\n", ret);
//	return 0;
//
#include<stdio.h>
char* my_strcat(char* dest, const char* scr)
{
	char* ret = dest;
	assert(dest != '\0');
	assert(scr != '\0');
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *scr++)
	{
		;
	}
	return ret;
	
}
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "bit!";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
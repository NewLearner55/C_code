#include<stdio.h>
#include<assert.h>
#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str++ !='\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcd");
//	printf("%d\n", len);
//	return 0;
//}

char* my_strcopy(char*dest,const char*src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "*********";
	char arr2[10] = "hello bit";
	my_strcopy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
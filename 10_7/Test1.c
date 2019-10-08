#include<stdio.h>
void print(size_t n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ",n%10);
}
int main()
{
	size_t num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
	/*int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret*i;
	}
	printf("%d\n", ret);
	return 0;*/

}
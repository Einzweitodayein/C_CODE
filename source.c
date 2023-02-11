#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int is_prime(int n)
{
	for (int j = 2; j <= sqrt(n); j++)
	{
		if (n % j)
		{
			return 1;
		}
		return 0;
	}
}
int main()
{
	//打印100-200之间的素数
	int i = 0;
	for (i = 101; i <= 200; i += 2)
	{
		//判断i是否为素数
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	system("pause");
	return 0;
}
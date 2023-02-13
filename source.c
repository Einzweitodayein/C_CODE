#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	//需要一个数组，这个数组可以存放4个函数的地址——函数指针的数组
	int(*pa)(int, int) = Add; // Sub/Mul/Div
	int(*parr[4])(int, int) = { Add,Sub,Mul,Div }; //函数指针的数组

	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", (parr[i])(2,3));
	}
	system("pause");
	return 0;
}

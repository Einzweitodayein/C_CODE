#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	
	//&�������ͺ��������Ǻ����ĵ�ַ
	/*
	printf("%p\n", &Add);
	printf("%p\n", Add);
	*/
	int (*pa)(int, int) = Add;
	printf("%d\n", (*pa)(a, b)); //30
	system("pause");
	return 0;
}

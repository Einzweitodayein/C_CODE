#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	//小端存储 整型地址互相转化。。。
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x\n", ptr1[-1], *ptr2);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int a = 10;
	int* pa = &a;  //pa就是一级指针变量 int*就是一级指针类型
	int** ppa = &pa; //ppa就是二级指针
	int*** pppa = &ppa; //pppa就是三级指针
	system("pause");
	return 0;
}

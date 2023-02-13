#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void test(int** p)
{}
int main()
{
	int* ptr;
	int** pp = &ptr;
	test(&ptr);
	test(pp);

	int* arr[10];
	test(arr); //指针数组也可以
	system("pause");
	return 0;
}

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
	test(arr); //ָ������Ҳ����
	system("pause");
	return 0;
}

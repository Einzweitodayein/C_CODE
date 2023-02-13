#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//一维数组传参
void test(int arr[]) //ok
{}
void test(int arr[10]) //ok
{}
void test(int* arr) //ok
{}
void test2(int* arr[20]) //ok
{}
void test2(int** arr) //ok
{}
int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
	system("pause");
	return 0;
}

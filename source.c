#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void test(int arr[3][5]) //ok
{}
void test1(int arr[][5]) //ok
{}
//void test2(int arr[3][]) error
//{}
// �ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]������
//��Ϊ��һ����ά���飬���Բ�֪���ж����У�������֪��һ���ж���Ԫ��

//void test3(int* arr) //error int*�Ǵ�����ͱ����ĵ�ַ�����ܴ�������ַ
//{}

//void test4(int** arr) //error int**�Ƕ���ָ�룬�������һ��ָ������ĵ�ַ�����ܴ�������ַ
//{}

void test5(int (*arr)[5]) //ok arr�Ǹ�ָ�룬ָ��5��Ԫ�ص����飬ÿ��Ԫ�ص�������int
{}

int main()
{
	int arr[3][5] = { 0 };

	//test(arr);
	//test1(arr);
	//test2(arr);
	//test3(arr);
	//test4(arr);
	test5(arr);
	system("pause");
	return 0;
}

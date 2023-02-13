#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void test(int arr[3][5]) //ok
{}
void test1(int arr[][5]) //ok
{}
//void test2(int arr[3][]) error
//{}
// 总结：二维数组传参，函数形参的设计只能省略第一个[]的数字
//因为对一个二维数组，可以不知道有多少行，但必须知道一列有多少元素

//void test3(int* arr) //error int*是存放整型变量的地址，不能存放数组地址
//{}

//void test4(int** arr) //error int**是二级指针，用来存放一级指针变量的地址，不能存放数组地址
//{}

void test5(int (*arr)[5]) //ok arr是个指针，指向5个元素的数组，每个元素的类型是int
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

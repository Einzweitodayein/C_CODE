#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char* arr[5];
	char*(*pa)[5] = &arr;
	//*说明pa是指针
	//pa 指针变量的名字
	//[5] pa指向的数组是5个元素的
	//char* pa指向的数组的元素类型

	system("pause");
	return 0;
}
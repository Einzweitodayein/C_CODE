#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr)); //sizeof计算的是数组大小，6*1=6字节
	printf("%d\n", sizeof(arr + 0));  //arr表示首元素的地址，arr+0还是首元素地址，本质是地址 所以还是4/8字节
	printf("%d\n", sizeof(*arr)); //1  arr是首元素地址，*arr就是首元素，首元素是字符大小就是一个字节
	printf("%d\n", sizeof(arr[1])); //1  第二个元素
	printf("%d\n", sizeof(&arr)); //&arr 虽然是数组的地址，但还是地址，地址大小就是4/8个字节
	printf("%d\n", sizeof(&arr + 1));// &arr+1是跳过整个数组后的地址，地址大小是4/8个字节
	printf("%d\n", sizeof(&arr[0] + 1));  //第二个元素的地址  4/8字节
	system("pause");
	return 0;
}

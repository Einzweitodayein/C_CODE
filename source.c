#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr)); //随机值
	printf("%d\n", strlen(arr + 0)); //随机值
	//printf("%d\n", strlen(*arr)); //非法访问 strlen参数只能放地址,这里把97(a)当成地址了
	//printf("%d\n", strlen(arr[1])); //error
	printf("%d\n", strlen(&arr)); //随机值
	printf("%d\n", strlen(&arr + 1)); //随机值
	printf("%d\n", strlen(&arr[0] + 1)); //随机值
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr)); //6
	printf("%d\n", strlen(arr + 0));  //6
	//printf("%d\n", strlen(*arr)); //非法访问 error
	//printf("%d\n", strlen(arr[1])); //非法访问 error
	printf("%d\n", strlen(&arr)); //6
	printf("%d\n", strlen(&arr + 1)); //随机值
	printf("%d\n", strlen(&arr[0] + 1)); //5
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr)); //6
	printf("%d\n", strlen(arr + 0));  //6
	//printf("%d\n", strlen(*arr)); //�Ƿ����� error
	//printf("%d\n", strlen(arr[1])); //�Ƿ����� error
	printf("%d\n", strlen(&arr)); //6
	printf("%d\n", strlen(&arr + 1)); //���ֵ
	printf("%d\n", strlen(&arr[0] + 1)); //5
	system("pause");
	return 0;
}

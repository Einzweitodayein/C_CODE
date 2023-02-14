#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char *p = "abcdef";
	printf("%d\n", strlen(p)); //6
	printf("%d\n", strlen(p + 1)); //5
	//printf("%d\n", strlen(*p)); //非法访问 error
	//printf("%d\n", strlen(p[0])); //非法访问 error
	printf("%d\n", strlen(&p)); //随机值
	printf("%d\n", strlen(&p + 1)); //随机值
	printf("%d\n", strlen(&p[0] + 1)); //5
	system("pause");
	return 0;
}

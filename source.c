#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char *p = "abcdef";
	printf("%d\n", strlen(p)); //6
	printf("%d\n", strlen(p + 1)); //5
	//printf("%d\n", strlen(*p)); //�Ƿ����� error
	//printf("%d\n", strlen(p[0])); //�Ƿ����� error
	printf("%d\n", strlen(&p)); //���ֵ
	printf("%d\n", strlen(&p + 1)); //���ֵ
	printf("%d\n", strlen(&p[0] + 1)); //5
	system("pause");
	return 0;
}

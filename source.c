#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char *p = "abcdef";  //常量字符串 把a的地址放到p里了
	printf("%d\n", strlen(p)); //4/8 计算指针变量的大小
	printf("%d\n", strlen(p + 0)); //p+1得到的是字符b的地址 4/8
	printf("%d\n", strlen(*p)); //1 *p就是字符串的第一个字符a
	printf("%d\n", strlen(p[1])); //1 int arr[10]; arr[0] == *(arr+0)  p[0] == *(p+0) == 'a'
	printf("%d\n", strlen(&p)); // 4/8 地址
	printf("%d\n", strlen(&p + 1));// 4/8 地址
	printf("%d\n", strlen(&p[0] + 1)); // 4/8 地址
	system("pause");
	return 0;
}

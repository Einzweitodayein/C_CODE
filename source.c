#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	char a = -128;
	//10000000000000000000000010000000 原码
	//11111111111111111111111101111111 反码
	//11111111111111111111111110000000 补码
	//100000000  char截断
	//11111111111111111111111110000000  //打印的时候看a类型进行整型提升
	printf("%u\n", a); //%u打印十进制的无符号数字
	system("pause");
	return 0;
}
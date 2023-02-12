#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	char a = -1;
	//10000000000000000000000000000001  //原码
	//11111111111111111111111111111110  //反码
	//11111111111111111111111111111111  //补码
	//11111111111111111111111111111111  //打印%d时发生整型提升
	signed char b = -1;
	//11111111
	unsigned char c = -1;
	//11111111
	printf("a=%d,b=%d,c=%d\n", a, b, c);  //打印的是原码 -1 -1 255
	system("pause");
	return 0;
}
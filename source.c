#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//写一段代码告诉我们当前机器的字节序是什么
int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	system("pause");
	return 0;
}
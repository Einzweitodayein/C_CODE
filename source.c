#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	//0---No error
	//1---Operation not permitted  不允许操作
	//2---No such file or directory 没有这样的文件或文件夹
	//3---No such process  没有这样的进程
	//....
	// char* str = strerror(1);
	//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
	//errno是一个全局的错误码的变量

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open file success\n");
	}
	
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa); //at
	system("pause");
	return 0;
}
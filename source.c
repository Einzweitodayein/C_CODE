#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	//这是哪个公司出的sb题？
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);  //FFFFFFFC  -4
	system("pause");
	return 0;
}
//p[4][2]==*(*(p+4)+2)
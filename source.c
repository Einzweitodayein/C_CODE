#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);  //printf()里面的表达式++运算结果保留 c上一个cpp的变化会保留
	printf("%s\n", *cpp[-2] + 3);  //cpp[-2]==*(cpp+(-2))
	printf("%s\n", cpp[-1][-1] + 1);
	system("pause");
	return 0;
}
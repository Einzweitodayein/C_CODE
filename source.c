#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	//0---No error
	//1---Operation not permitted  ���������
	//2---No such file or directory û���������ļ����ļ���
	//3---No such process  û�������Ľ���
	//....
	// char* str = strerror(1);
	//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
	//errno��һ��ȫ�ֵĴ�����ı���

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
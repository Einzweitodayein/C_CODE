#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr)); //���ֵ
	printf("%d\n", strlen(arr + 0)); //���ֵ
	//printf("%d\n", strlen(*arr)); //�Ƿ����� strlen����ֻ�ܷŵ�ַ,�����97(a)���ɵ�ַ��
	//printf("%d\n", strlen(arr[1])); //error
	printf("%d\n", strlen(&arr)); //���ֵ
	printf("%d\n", strlen(&arr + 1)); //���ֵ
	printf("%d\n", strlen(&arr[0] + 1)); //���ֵ
	system("pause");
	return 0;
}

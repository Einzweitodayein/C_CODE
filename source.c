#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr)); //sizeof������������С��6*1=6�ֽ�
	printf("%d\n", sizeof(arr + 0));  //arr��ʾ��Ԫ�صĵ�ַ��arr+0������Ԫ�ص�ַ�������ǵ�ַ ���Ի���4/8�ֽ�
	printf("%d\n", sizeof(*arr)); //1  arr����Ԫ�ص�ַ��*arr������Ԫ�أ���Ԫ�����ַ���С����һ���ֽ�
	printf("%d\n", sizeof(arr[1])); //1  �ڶ���Ԫ��
	printf("%d\n", sizeof(&arr)); //&arr ��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С����4/8���ֽ�
	printf("%d\n", sizeof(&arr + 1));// &arr+1���������������ĵ�ַ����ַ��С��4/8���ֽ�
	printf("%d\n", sizeof(&arr[0] + 1));  //�ڶ���Ԫ�صĵ�ַ  4/8�ֽ�
	system("pause");
	return 0;
}

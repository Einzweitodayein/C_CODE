#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char *p = "abcdef";  //�����ַ��� ��a�ĵ�ַ�ŵ�p����
	printf("%d\n", strlen(p)); //4/8 ����ָ������Ĵ�С
	printf("%d\n", strlen(p + 0)); //p+1�õ������ַ�b�ĵ�ַ 4/8
	printf("%d\n", strlen(*p)); //1 *p�����ַ����ĵ�һ���ַ�a
	printf("%d\n", strlen(p[1])); //1 int arr[10]; arr[0] == *(arr+0)  p[0] == *(p+0) == 'a'
	printf("%d\n", strlen(&p)); // 4/8 ��ַ
	printf("%d\n", strlen(&p + 1));// 4/8 ��ַ
	printf("%d\n", strlen(&p[0] + 1)); // 4/8 ��ַ
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

//дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
//�����s1=AABCD��s2=BCDAA,����1
//����s1=abcd��s2=ACBBD,����0

//KMP�㷨
int is_left_move(char* s1, char* s2)
{
	//1.��str1�ַ�����׷��һ��str1�ַ���
	//strncat
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2)  //���ַ������Ȳ���ͬ��һ��������ת�õ�
		return 0;
	strncat(s1, s1, len1);
	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������ִ�
	//strstr-���ִ���
	char* str = strstr(s1, s2);  //��s1����s2 �ҵ��˾ͷ��ص�һ���ַ��ĵ�ַ���Ҳ����ͷ��ؿ�ָ��
	if (str == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("Yes\n");
	else
		printf("No\n");
	system("pause");
	return 0;
}

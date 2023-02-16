#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

//写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串
//例如给s1=AABCD和s2=BCDAA,返回1
//给定s1=abcd和s2=ACBBD,返回0

void left_move(char* arr,int k)
{
	int len = strlen(arr);
	int i = 0;
	for (i = 0; i < k; i++)
	{
		int temp = *arr;
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = temp;
	}
}
int is_left_move(char* s1, char* s2)
{
	int len = strlen(s1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		left_move(s1, 1);
		int ret = strcmp(s1, s2);
		if (ret == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("Yes\n");
	else
		printf("No\n");
	system("pause");
	return 0;
}

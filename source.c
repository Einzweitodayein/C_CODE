#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

//写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串
//例如给s1=AABCD和s2=BCDAA,返回1
//给定s1=abcd和s2=ACBBD,返回0

//KMP算法
int is_left_move(char* s1, char* s2)
{
	//1.在str1字符串中追加一个str1字符串
	//strncat
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2)  //两字符串长度不相同那一定不是旋转得到
		return 0;
	strncat(s1, s1, len1);
	//2.判断str2指向的字符串是否是str1指向的字符串的字串
	//strstr-找字串的
	char* str = strstr(s1, s2);  //在s1里找s2 找到了就返回第一个字符的地址，找不到就返回空指针
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

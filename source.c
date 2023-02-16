#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;
	if (*p2 == '\0') //当要查的字符串为""时
	{
		return p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur; //找到子串
		}
		cur++;
	}
	return NULL;  //找不到子串
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "bcdo";
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	system("pause");
	return 0;
}
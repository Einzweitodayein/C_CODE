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
	if (*p2 == '\0') //��Ҫ����ַ���Ϊ""ʱ
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
			return cur; //�ҵ��Ӵ�
		}
		cur++;
	}
	return NULL;  //�Ҳ����Ӵ�
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "bcdo";
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("�Ӵ�������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	system("pause");
	return 0;
}
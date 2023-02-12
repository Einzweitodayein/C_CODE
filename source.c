#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//void my_strcpy(char* dest, char* src)  //构造自己的字符串拷贝函数
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;  //'\0'
//}

//优化
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)  //防止传参时传的是NULL
//	{
//		while (*dest++ = *src++) //利用后置++的特性和'\0'的ASCII值为0
//		{
//			;
//		}
//	}
//}

//再优化
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL); //当括号内表达式为假时抛异常
//	assert(src != NULL);
//	while (*dest++ = *src++) //利用后置++的特性和'\0'的ASCII值为0
//	{
//		;
//	}
//}

//再再优化
void my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL); //当括号内表达式为假时抛异常
	assert(src != NULL);
	while (*dest++ = *src++) //利用后置++的特性和'\0'的ASCII值为0
	{
		;
	}
}

int main()
{
	char arr1[] = "#########";
	char arr2[] = "bit";
	my_strcpy(arr1, NULL);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//void my_strcpy(char* dest, char* src)  //�����Լ����ַ�����������
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;  //'\0'
//}

//�Ż�
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)  //��ֹ����ʱ������NULL
//	{
//		while (*dest++ = *src++) //���ú���++�����Ժ�'\0'��ASCIIֵΪ0
//		{
//			;
//		}
//	}
//}

//���Ż�
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL); //�������ڱ��ʽΪ��ʱ���쳣
//	assert(src != NULL);
//	while (*dest++ = *src++) //���ú���++�����Ժ�'\0'��ASCIIֵΪ0
//	{
//		;
//	}
//}

//�����Ż�
void my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL); //�������ڱ��ʽΪ��ʱ���쳣
	assert(src != NULL);
	while (*dest++ = *src++) //���ú���++�����Ժ�'\0'��ASCIIֵΪ0
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
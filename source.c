#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr)); //sizeof(arr)���������Ĵ�С����λ���ֽڣ�7
	printf("%d\n", sizeof(arr + 0)); // 4/8 ������ǵ�ַ�Ĵ�С arr+0����Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*arr)); //1  *arr����Ԫ��,sizeof(*arr)������Ԫ�صĴ�С
	printf("%d\n", sizeof(arr[1])); //1 arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(&arr)); // 4/8 &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ��������4/8�ֽ�
	printf("%d\n", sizeof(&arr + 1)); // 4/8 &arr+1���������������ĵ�ַ����Ҳ�ǵ�ַ
	printf("%d\n", sizeof(&arr[0] + 1)); // 4/8 &arr[0]+1�ǵڶ���Ԫ�صĵ�ַ
	system("pause");
	return 0;
}

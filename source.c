#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

//�����ַ�������
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
void left_move(char* arr,int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr,arr+k-1); //�������
	reverse(arr + k, arr + len - 1); //�����ұ�
	reverse(arr, arr + len - 1); //��������
}

int main()
{
	char arr[] = "abcdef";
	left_move(arr, 4);
	printf("%s\n", arr);
	system("pause");
	return 0;
}

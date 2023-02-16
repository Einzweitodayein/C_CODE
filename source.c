#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//��������ʹ����λ��ż����ǰ��
void move(int* arr, int len)
{
	int* left = arr;
	int* right = arr + len-1;


	while (left<right)
	{
		//�������ż��
		while ( (left<right) && (*left % 2 == 1)) //��ֹȫ�������������--��Խ�����
		{
			left++;
		}
		//���ұ�������
		while ( (left < right) && (*right % 2 == 0))  //��ֹȫ��ż���������++��Խ�����
		{
			right--;
		}
		if (left < right)
		{
			int temp = *left;
			*left = *right;
			*right = temp;
			left++;
			right--;
		}
		
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,5,6,7,8,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	move(arr, len);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}

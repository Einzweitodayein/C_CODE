#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�������������ʽ
void Print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//������ָ�����ʽ
void Print2(int (*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p + i) + j));
			//*(p+i)�õ��������������ǵ�ַ����j֮���ٽ����ò����������Ԫ��
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	Print1(arr, 3, 5); //arr ����������Ԫ�ص�ַ
	//��ά��������� ��arr�����һά���飬��Ԫ�ؾ��ǵ�һ��
	//�������������ֺ���ʵ��
	Print2(arr, 3, 5);
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>


//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O(N);

int FindNum(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;
	while (x < row && y >= 0 )
	{
		if (arr[x][y] > k)
		{
			y--;

		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	//�Ҳ���
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},
		              {4,5,6},
		              {7,8,9} };
	int k = 9;
	int ret = FindNum(arr, k,3,3);
	if (ret == 1)
	{
		printf("����\n");
	}
	else
	{
		printf("������\n");
	}
	system("pause");
	return 0;
}

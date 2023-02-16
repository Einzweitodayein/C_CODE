#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>


//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求时间复杂度小于O(N);

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
	//找不到
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
		printf("存在\n");
	}
	else
	{
		printf("不存在\n");
	}
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//参数是数组的形式
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

//参数是指针的形式
void Print2(int (*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p + i) + j));
			//*(p+i)得到的是数组名，是地址，加j之后再解引用才是数组里的元素
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	Print1(arr, 3, 5); //arr 数组名是首元素地址
	//二维数组情况下 把arr想象成一维数组，首元素就是第一行
	//所以有下面这种函数实现
	Print2(arr, 3, 5);
	system("pause");
	return 0;
}

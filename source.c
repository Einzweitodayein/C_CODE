#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//调整数组使奇数位于偶数的前面
void move(int* arr, int len)
{
	int* left = arr;
	int* right = arr + len-1;


	while (left<right)
	{
		//从左边找偶数
		while ( (left<right) && (*left % 2 == 1)) //防止全是奇数的情况下--会越界访问
		{
			left++;
		}
		//从右边找奇数
		while ( (left < right) && (*right % 2 == 0))  //防止全是偶数的情况下++会越界访问
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

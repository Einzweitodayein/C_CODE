#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>


void Print(int k)
{
	int i = 0;
	for (i = 0; i < k; i++)
	{
		int j = 0;
		for (j = 0; j < k - 1-i; j++)
		{
			printf(" ");
		}
		
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");

	}

	for (i = 0; i < k - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <2*(k-1-i)-1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int line = 0;
	scanf("%d", &line);
	Print(line);
	system("pause");
	return 0;
}
//     *//5
//    ***//4
//   *****
//  *******
// *********
//***********
// *********  //1
//  *******   //2
//   *****   //3
//    ***
//     *
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr)); //sizeof(arr)计算的数组的大小，单位是字节：7
	printf("%d\n", sizeof(arr + 0)); // 4/8 计算的是地址的大小 arr+0是首元素的地址
	printf("%d\n", sizeof(*arr)); //1  *arr是首元素,sizeof(*arr)计算首元素的大小
	printf("%d\n", sizeof(arr[1])); //1 arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
	printf("%d\n", sizeof(&arr)); // 4/8 &arr虽然是数组的地址，但也是地址，所以是4/8字节
	printf("%d\n", sizeof(&arr + 1)); // 4/8 &arr+1是跳过整个数组后的地址，但也是地址
	printf("%d\n", sizeof(&arr[0] + 1)); // 4/8 &arr[0]+1是第二个元素的地址
	system("pause");
	return 0;
}

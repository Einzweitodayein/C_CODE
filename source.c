#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	//数组名是首元素的地址
	//1.sizeof(数组名)——数组名表示整个数组
	//2.&数组名——数组名表示整个数组

	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a)); //sizeof(数组名)—计算的是数组总大小 16
	printf("%d\n", sizeof(a + 0)); //数组名这里表示首元素地址，a+0还是首元素地址 地址的大小就是4/8字节
	printf("%d\n", sizeof(*a)); // 数组名表示首元素地址，*a就是首元素 sizeof(*a)就是4
	printf("%d\n", sizeof(a + 1)); //数组名这里表示首元素地址，a+1是第二个元素地址 地址的大小就是4/8字节
	printf("%d\n", sizeof(a[1])); //第二个元素的地址 4/8
	printf("%d\n", sizeof(&a)); //&a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(*&a)); //16  &a数组的地址,数组的地址解引用访问的是数组，sizeof计算的就是数组的大小，单位是字节
	printf("%d\n", sizeof(&a + 1)); // &a是数组的地址，&a+1虽然跳过整个数组，但还是地址，所以是4/8
	printf("%d\n", sizeof(&a[0])); // 4/8  &a[0]是第一个元素的地址
	printf("%d\n", sizeof(&a[0] + 1)); // 4/8 &a[0]+1是第二个元素的地址
	system("pause");
	return 0;
}

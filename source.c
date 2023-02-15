#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a)); //48 
	printf("%d\n", sizeof(a[0][0])); //4
	printf("%d\n", sizeof(a[0])); //16  a[0]相当于第一行作为一维数组的数组名，sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
	printf("%d\n", sizeof(a[0] + 1)); // 4/8  a[0]是第一行的数组名，数组名此时是首元素的地址，a[0]其实就是第一行第一个元素的地址，所以arr[0]+1就是第一行第二个元素的地址
	printf("%d\n", sizeof(*(a[0] + 1))); //*(a[0]+1) 是第一行第二个元素，大小是4字节
	printf("%d\n", sizeof(a + 1)); // 4/8 a是二维数组的数组名，没有sizeof(数组名)，也没有&(数组名)，所以a是首元素地址，而把二维数组看成一维数组时，二维数组的首元素是第一行，a就是第一行(首元素)的地址,a[0]+就是第二行的地址
	printf("%d\n", sizeof(*(a + 1))); //16 sizeof(a[1])计算第二行的大小，单位是字节
	printf("%d\n", sizeof(&a[0] + 1)); // 4/8 第二行的地址
	printf("%d\n", sizeof(*(&a[0] + 1))); //16
	printf("%d\n", sizeof(*a)); //16 
	printf("%d\n", sizeof(a[3])); //sizeof表达式不访问内部数据不参与运算，只是根据类型计算大小 16
	system("pause");
	return 0;
}

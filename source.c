#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>


int main()
{
	//const int num = 10;
	//int* p = &num;
	//*p = 20; //依然可以通过指针修改num常量,破坏了规则...
	//printf("%d\n", num);

	//const int num = 10;
	//const int int* p = &num;
	//*p = 20; //error const放在指针变量的*左边时，修饰的是*p,也就是说：不能通过p来改变*p(num)的值
	//printf("%d\n", num);

	const int num = 10;
	int* const p = &num; //const放在指针变量的*左边时，修饰的是指针变量p本身，p不能被改变了
	*p = 20;
	int n = 100;
	p = &n;  //不能被改变

	printf("%d\n", num);
	system("pause");
	return 0;
}
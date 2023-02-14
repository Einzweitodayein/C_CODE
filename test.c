#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	int a = 10;
	//int* pa = &a;
	//char ch = 'w';

	void* p = &a;
	//p = &ch;
	//*p = 0; error void*类型的指针不能进行解引用的操作，因为它不知道要访问几个字节
	//p++;    error void*类型的指针不能进行加减整数的操作，因为它不知道要跳几个字字
	system("pause");
	return 0;
}
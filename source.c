#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<assert.h>

struct S
{
	char name[20];
	int age;
};

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;   //优先级后置++ > 强制类型转换 > 前置++   所以采用前置++
		++(char*)src;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	struct S arr3[] = { {"张三",20},{"李四",30} };
	struct S arr4[3] = { 0 };
	memcpy(arr2,arr1,sizeof(arr1));
	my_memcpy(arr4, arr3, sizeof(arr3));
	system("pause");
	return 0;
}
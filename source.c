#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

int main()
{
	char arr[] = "zpw@bitedu.tech";
	char* p = "@.";

	char buf[1024] = { 0 };
	strcpy(buf, arr);

	//切割buf中的字符串
	
	//写法不好
	//char* ret = strtok(arr, p);
	//printf("%s\n", ret); //zpw

	//ret = strtok(NULL, p);
	//printf("%s\n", ret); //bitedu

	//ret = strtok(NULL, p);
	//printf("%s\n", ret); //tech

	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	system("pause");
	return 0;
}
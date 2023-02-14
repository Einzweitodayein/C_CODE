#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Stu
{
	char name[20];
	int age;
};

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
//ʵ��bubble_sort�����ĳ���Ա������֪��δ���������������
//Ҳ��֪�����Ƚϵ�����Ԫ�ص�����
void buble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz-1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0) //��Ԫ�ص�ַ
			{
				//����
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}
}


int cmp_int(void* e1, void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test1() //ð��������
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	buble_sort(arr, sz, sizeof(arr[0]), cmp_int);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int cmp_stu_name(void* e1, void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_age(void* e1, void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test2() //ð���Žṹ���е�����
{
	struct Stu s[3] = { {"����",30},{"����",40},{"����",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	buble_sort(s, sz, sizeof(s[0]), cmp_stu_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", (s+i)->name);
	}
}
void test3() //ð���Žṹ���е�����
{
	struct Stu s[3] = { {"����",30},{"����",40},{"����",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	buble_sort(s, sz, sizeof(s[0]), cmp_stu_age);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", (s + i)->age);
	}
}

int main()
{
	test1();
	printf("\n");
	test2();
	printf("\n");
	test3();
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

typedef struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu temp)
{
	printf("name:%s\n", temp.name);
	printf("age:%d\n", temp.age);
	printf("tele:%s\n", temp.tele);
	printf("sex:%s\n", temp.sex);
}

void Print2(Stu* ps)
{
	printf("name:%s\n", (*ps).name);
	printf("age:%d\n", (*ps).age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}

int main()
{
	Stu s = { "����",40,"15559888144","��" };
	Print1(s);
	Print2(&s);
	system("pause");
	return 0;
}
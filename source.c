#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int a = 10;
	int* pa = &a;  //pa����һ��ָ����� int*����һ��ָ������
	int** ppa = &pa; //ppa���Ƕ���ָ��
	int*** pppa = &ppa; //pppa��������ָ��
	system("pause");
	return 0;
}

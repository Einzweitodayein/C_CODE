#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char* arr[5];
	char*(*pa)[5] = &arr;
	//*˵��pa��ָ��
	//pa ָ�����������
	//[5] paָ���������5��Ԫ�ص�
	//char* paָ��������Ԫ������

	system("pause");
	return 0;
}
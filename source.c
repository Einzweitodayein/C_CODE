#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>


int main()
{
	//const int num = 10;
	//int* p = &num;
	//*p = 20; //��Ȼ����ͨ��ָ���޸�num����,�ƻ��˹���...
	//printf("%d\n", num);

	//const int num = 10;
	//const int int* p = &num;
	//*p = 20; //error const����ָ�������*���ʱ�����ε���*p,Ҳ����˵������ͨ��p���ı�*p(num)��ֵ
	//printf("%d\n", num);

	const int num = 10;
	int* const p = &num; //const����ָ�������*���ʱ�����ε���ָ�����p����p���ܱ��ı���
	*p = 20;
	int n = 100;
	p = &n;  //���ܱ��ı�

	printf("%d\n", num);
	system("pause");
	return 0;
}
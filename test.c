#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a = 10;
	//int* pa = &a;
	//char ch = 'w';

	void* p = &a;
	//p = &ch;
	//*p = 0; error void*���͵�ָ�벻�ܽ��н����õĲ�������Ϊ����֪��Ҫ���ʼ����ֽ�
	//p++;    error void*���͵�ָ�벻�ܽ��мӼ������Ĳ�������Ϊ����֪��Ҫ����������
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a)); //48 
	printf("%d\n", sizeof(a[0][0])); //4
	printf("%d\n", sizeof(a[0])); //16  a[0]�൱�ڵ�һ����Ϊһά�������������sizeof(arr[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
	printf("%d\n", sizeof(a[0] + 1)); // 4/8  a[0]�ǵ�һ�е�����������������ʱ����Ԫ�صĵ�ַ��a[0]��ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ������arr[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*(a[0] + 1))); //*(a[0]+1) �ǵ�һ�еڶ���Ԫ�أ���С��4�ֽ�
	printf("%d\n", sizeof(a + 1)); // 4/8 a�Ƕ�ά�������������û��sizeof(������)��Ҳû��&(������)������a����Ԫ�ص�ַ�����Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ���ǵ�һ�У�a���ǵ�һ��(��Ԫ��)�ĵ�ַ,a[0]+���ǵڶ��еĵ�ַ
	printf("%d\n", sizeof(*(a + 1))); //16 sizeof(a[1])����ڶ��еĴ�С����λ���ֽ�
	printf("%d\n", sizeof(&a[0] + 1)); // 4/8 �ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0] + 1))); //16
	printf("%d\n", sizeof(*a)); //16 
	printf("%d\n", sizeof(a[3])); //sizeof���ʽ�������ڲ����ݲ��������㣬ֻ�Ǹ������ͼ����С 16
	system("pause");
	return 0;
}

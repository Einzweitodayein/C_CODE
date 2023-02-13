#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 9;
	//0 00000000 00000000000000000001001  补码
	float* pFloat = (float*)&n;
	printf("n的值为:%d\n", n);  //9
	//(-1)^0 * 0.00000000000000000001001 * 2^-126
	printf("*pFloat的值为:%f\n", *pFloat);  //0.000000 以浮点数的形式拿整型的值

	*pFloat = 9.0;
	//1001.0
	//1.001*2^3
	//(-1)^0*1.001*2^3
	//0 10000010 00100000000000000000000
	printf("n的值为:%d\n", n);  //1091567616 以整型的形式拿浮点数的值
	printf("*pFloat的值为:%f\n", *pFloat);  //9.000000
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//编写函数计算并输出n(包括n)以内能被5或9整除的所有自然数的倒数之和
void fun(int x)
{
	float sum = 0;
	for (int i = 1; i <= x; i++)
	{
		if (i % 5 == 0 || i % 9 == 0)
		{
			sum += 1.0 / i;
		}
	}
	printf("%.2f", sum);
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	fun(a);
	return 0;
}
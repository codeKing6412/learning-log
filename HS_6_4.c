#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��д�������㲢���n(����n)�����ܱ�5��9������������Ȼ���ĵ���֮��
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
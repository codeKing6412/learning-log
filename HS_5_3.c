#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//用指针实现数组元素逆置
int main()
{
	int a[10] = { 0 };
	int* p, * q;
	int temp = 0;
	for (p = a; p < a + 10; p++)
	{
		scanf("%d", p);
	}
	p -= 1;
	for (q = a; p > q; q++, p--)
	{
		temp = *q;
		*q = *p;
		*p = temp;
	}
	for (p = a; p < a + 10; p++)
	{
		printf("%d ", *p);
	}
	return 0;
}
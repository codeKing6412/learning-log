#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, m; int i; int* p, * q, * t; int j = 0;
	int a[10] = { 0 };
	int b[10] = { 0 };
	int c[100] = { 0 };
	scanf("%d", &m);//a数组元素数
	for (i = 0; i < m; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &n);//b数组元素数
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	p = a; q = b; t = c;
	for (; p < a + m && q < b + n;t++,j++)//取a,b两数组中较小值存入c数组中,直到将a,b数组其一完全遍历一遍
	{
		if (*p < *q)
		{
			*t = *p;
			p++;
		}
		else
		{
			*t = *q;
			q++;
		}
	}
	if (p == a + m)//a数组完成遍历
	{
		while (q < b + n)
		{
			*t = *q;
			q++; t++;
		}
	}
	if (q == b + n)//b数组完成遍历
	{
		while (p < a + m)
		{
			*t = *p;
			p++; t++;
		}
	}
	for (i=0;i<m+n;i++)//打印
	{
		printf("%d ", c[i]);
	}
	return 0;
}
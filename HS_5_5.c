#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, m; int i; int* p, * q, * t; int j = 0;
	int a[10] = { 0 };
	int b[10] = { 0 };
	int c[100] = { 0 };
	scanf("%d", &m);//a����Ԫ����
	for (i = 0; i < m; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &n);//b����Ԫ����
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	p = a; q = b; t = c;
	for (; p < a + m && q < b + n;t++,j++)//ȡa,b�������н�Сֵ����c������,ֱ����a,b������һ��ȫ����һ��
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
	if (p == a + m)//a������ɱ���
	{
		while (q < b + n)
		{
			*t = *q;
			q++; t++;
		}
	}
	if (q == b + n)//b������ɱ���
	{
		while (p < a + m)
		{
			*t = *p;
			p++; t++;
		}
	}
	for (i=0;i<m+n;i++)//��ӡ
	{
		printf("%d ", c[i]);
	}
	return 0;
}
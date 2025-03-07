#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m, n; int a[10] = { 0 }; int b[10] = { 0 };
	int i = 0; int t = 0;
	int* p; int* q;
	scanf("%d", &m);
	for (p = a; p < a + m; p++)
	{
		scanf("%d", p);
	}
	scanf("%d", &n);
	for (q = b; q < b + n; q++)
	{
		scanf("%d", q);
	}
	p = a; q = b;
	for (; p < a + m && q < b + n;p++,q++)
	{
		t = *p;
		*p = *q;
		*q = t;
	}
	if (p == a + m)
	{
		while (q < b + n)
		{
			t = *p;
			*p = *q;
			*q = t;
			q++; p++;
		}
	}
	if (q == b + n)
	{
		while (p < a + m)
		{
			t = *p;
			*p = *q;
			*q = t;
			p++; q++;
		}
	}
	for (p = a; p < a + n; p++)
	{
		printf("%d ", *p);
	}
	printf("\n");
	for (q = b; q < b + m; q++)
	{
		printf("%d ", *q);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int* p;
	int q = 0;
	int j = 0;
	scanf("%d", &n);
	int a[15] = { 0 };
	for (p = a; p < a + n; p++)
	{
		scanf("%d", p);
	}
	p = a;
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if ( *(p+i) > *(p + j))
			{
				q = *(p + i);
				*(p+i) = *(p+j);
				*(p + j) = q;
			}
		}
	}
	for (p = a; p < a + n; p++)
	{
		printf("%d ", *p);
	}
	return 0;
}
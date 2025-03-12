#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fun(int x)
{
	float s = 0; int a = 0;
	for (int i = 0; i < x; i++)
	{
		a += 1 + i;
		s += 1.0 / a;
	}
	printf("s=%f", s);
}
int main()
{
	int n;
	scanf("%d", &n);
	fun(n);
	return 0;
}
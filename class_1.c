#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void star(int n)//打印“*”
{
	for (int i = 0; i < n; i++)
	{
		printf("*");
	}
}
void null(int m)//打印空格
{
	for (int i = 0; i < m; i++)
	{
		printf(" ");
	}
}
void dec1(int p)//打印装饰
{
	for (int i = 0; i < p; i++)
	{
		printf("$");
	}
}
void dec2(int q)//打印装饰
{
	for (int i = 0; i < q; i++)
	{
		printf("^");
	}
}
int main()
{
	printf("\t");
	star(9);
	dec1(1);
	star(9);
	dec1(1);
	star(10);
	printf("\n");
	printf("\t");
	star(1);
	null(7);
	dec2(1);
	printf("姓名：金俊旭");
	dec2(1);
	null(7);
	star(1);
	printf("\n");
	printf("\t");
	star(1);
	null(6);
	dec2(1);
	printf("QQ：3572163214");
	dec2(1);
	null(6);
	star(1);
	printf("\n");
	printf("\t");
	star(1);
	null(3);
	dec2(1);
	printf("口号：小爷成魔不成仙");
	dec2(1);
	null(3);
	star(1);
	printf("\n");
	printf("\t");
	star(9);
	dec1(1);
	star(9);
	dec1(1);
	star(10);
	return 0;
}
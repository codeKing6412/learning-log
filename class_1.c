#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void star(int n)//��ӡ��*��
{
	for (int i = 0; i < n; i++)
	{
		printf("*");
	}
}
void null(int m)//��ӡ�ո�
{
	for (int i = 0; i < m; i++)
	{
		printf(" ");
	}
}
void dec1(int p)//��ӡװ��
{
	for (int i = 0; i < p; i++)
	{
		printf("$");
	}
}
void dec2(int q)//��ӡװ��
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
	printf("����������");
	dec2(1);
	null(7);
	star(1);
	printf("\n");
	printf("\t");
	star(1);
	null(6);
	dec2(1);
	printf("QQ��3572163214");
	dec2(1);
	null(6);
	star(1);
	printf("\n");
	printf("\t");
	star(1);
	null(3);
	dec2(1);
	printf("�ںţ�Сү��ħ������");
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
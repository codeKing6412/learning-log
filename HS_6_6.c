#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��д������������λ�����������ϲ��γ�һ������
int fun(int x, int y)
{
	int a1 = x / 10;
	int a2 = x % 10;
	int b1 = y / 10;
	int b2 = y % 10;
	int c = b2 * 1000 + a1 * 100 + b1 * 10 + a2;
	printf("c=%d", c);
}
int main()
{
	int a, b;
	scanf("%d%d", &a,&b);
	fun(a, b);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��1�أ�������x��n���ݵĺ����������ؼ�����
int power(int x, int y)
{
	int n = 1;
	for (int i = 0; i < y; i++)
	{
		n *= x;
	}
	return (n);
}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int ret = power(a,b);
//	printf("%d", ret);
//	return 0;
//}
//��2�أ�������x��n���ݵĺ���
int main()
{
	int i = 0;
	int n = 0;
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d ", power(a, b));
	printf("%d ", power(a, 3));
	printf("%d ", power(2, a + b));
	printf("%d", power(power(a, 3), b+2));
	return 0;
}
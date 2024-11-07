#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////递归和辗转相除法找出两个数之间的最大公因数。
//int gcd(int x, int y)
//{
//	if (0 == y)
//	{
//		return x;
//	}
//	return gcd(y, x % y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//int ret = gcd(a, b);
//	int c = (a < b) ? a : b;
//	while (1)
//	{
//		if (a % c == 0 && b % c == 0)
//			break;
//		c--;
//	}
//	printf("%d\n", c);
//	return 0;
//}
//练习:数数1~100中的9的个数。
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 0; a <= 100; a++)
//	{
//		if (a % 10 == 9)
//		{
//			printf("%d ", a);
//			count++;
//		}
//		if (a / 10 == 9)
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	double sum = 0;
//	int flag = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		sum = sum + flag * (1.0 / a);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr1[10] = { 7,19,2,1,4,7,25,8,13,9};
//	int i = 0;
//	int max = arr1[0];
//	for (i = 1; i <= 10; i++)
//	{
//		if (max < arr1[i])
//			max = arr1[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}
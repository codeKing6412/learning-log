#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			if (a < d)
//				printf("%d\n", d);
//			else//(a > d)
//				printf("%d\n", a);
//		}
//		else //(a < c)
//		{
//			if (a > d)
//				printf("%d\n", c);
//			else//(a < d)
//			{
//				if (c > d)
//					printf("%d\n", c);
//				else//(c < d)
//					printf("%d\n", d);
//			}
//		}
//
//
//	}
//	else// (a < b)
//	{
//		if (b > c)
//		{
//			if (b > d)
//				printf("%d\n", b);
//			else//(b < d)
//				printf("%d\n", d);
//		}
//		else//(b < c)
//		{
//			if (c > d)
//				printf("%d\n", c);
//			else//(c < d)
//				printf("%d\n", d);
//		}
//	}
//	return 0;
//}
//作业：比较四个数大小（暴力嵌套版）
//优解1：
//int main()
//{
//	int arr[4] = { 0 };
//	//0 1 2 3
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}
//另优解
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	scanf("%d", &max);
//	while (i < 4)
//	{
//		scanf("%d", &n);//
//		if (n > max)
//			max = n;
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}
//BMI指数计算
//int main()
//{
//	int weight = 0;
//	int height = 0;
//	scanf("%d %d", &weight, &height);
//	float BMI = weight / (height/100.0) / (height/100.0);
//	printf("%.2f", BMI);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//3.16
//int main()
//{
//	int i = 0; 
//	int n = 0;
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		num1 = i / 100;
//		num2 = i % 100 / 10;
//		num3 = i % 10;
//		if (i == num1 * num1 * num1 + num2 * num2 * num2 + num3 * num3 * num3)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//3.17
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum += i;
//		}
//	}
//	if (sum == n)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}
//3.18
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//			}
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//		sum = 0;
//	}
//	return 0;
//}
//4.1
//int main()
//{
//	int i = 0;
//	int arr[30];
//	int sum = 0;
//	int count = 0;
//	float aver = 0;
//	int n = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &n);
//		arr[i] = n;
//		sum += arr[i];
//		aver = sum / 5;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		if (aver < arr[i])
//		{
//			count++;
//		}
//	}
//	printf("aver=%f\n", aver);
//	printf("count=%d", count);
//	return 0;
//}
//4.2
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int min = 0;
//	int tmp = 0;
//	int s = 0;
//	int N = 0;
//	int n = 0;
//	int arr[20];
//	int k = 0;
//	for (i = 0; i < 10; i++)//存入数据并四四打印
//	{
//		scanf("%d", &n);
//		arr[i] = n;
//		s += arr[i];
//		if(k<4)
//		{
//			printf("%d ", arr[i]);
//			k++;
//		}
//		else
//		{
//			printf("\n");
//			printf("%d ", arr[i]);
//			k = 1;
//		}
//	}
//	printf("\n");
//	max = arr[0];
//	min = arr[9];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			tmp = max;
//			max = arr[i];
//			arr[i] = tmp;
//		}
//		if (min > arr[i])
//		{
//			tmp = min;
//			min = arr[i];
//			arr[i] = tmp;
//		}
//	}
//
//	printf("最大值：%d\n", max);
//	printf("最小值：%d\n", min);
//	printf("平均值：%f\n", (float)s / 10);
//
//	return 0;
//}
//4.3
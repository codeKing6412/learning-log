#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//4.16冒泡排序
//int main()
//{
//	int i = 0; int a[10] = { 0 };
//	int n = 0; int t = 0; int j = 0; int k = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (k = 0; k < n - 1; k++)
//	{
//		for (j = 1; j < n; j++)
//		{
//			for (; i > 1; i--)
//			{
//				if (a[n - i] > a[n - i + 1])
//				{
//					t = a[n - i];
//					a[n - i] = a[n - i + 1];
//					a[n - i + 1] = t;
//				}
//			}
//		}
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", a[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//4.16比较相邻两个元素求最大值
//int main()
//{
//	int i = 0; int max; int t = 0;
//	int n = 0; int j = 0;
//	int a[10] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	max = a[0];
//	for (i = 0; i < n-1; i++)
//	{
//		if (a[i] > a[i+1])
//		{
//			t = a[i];
//			a[i] = a[i+1];
//			a[i+1] = t;
//			max = a[i];
//		}
//		else
//		{
//			if (a[i] < a[i + 1])
//			{
//				max = a[i];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//4.17在一个数组中查找最小值，将最小值与第一个数组元素交换输出
//int main()
//{
//	int i = 0; int j = 0;
//	int n = 0; int t = 0;
//	int a[10] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int min = a[0];
//	for (i = 1; i < n; i++)
//	{
//		if (min > a[i])
//		{
//			min = a[i];
//			j = i;
//		}
//	}
//	t = a[0];
//	a[0] =a[j];
//	a[j] = t;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//4.17简单选择排序
//int main()
//{
//	int i = 0; int min = 0;
//	int n = 0; int j = 0; int k = 0; int m = 0; int t = 0;
//	int a[10] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (m = 0; m < n - 1; m++)
//	{
//		min = a[m];
//		for (i = m; i < n; i++)
//		{
//			if (min > a[i])
//			{
//				min = a[i];
//				j = i;
//			}
//		}
//		t = a[m];
//		a[m] = a[j];
//		a[j] = t;
//		for (k = 0; k < n; k++)
//		{
//			printf("%d ", a[k]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//4.18编写程序将一个给定的整数插到原本有序的整数序列中，使结果序列仍然有序
//int main()
//{
//	int i = 0; int j = 0;
//	int n = 0; int m = 0;
//	int a[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);
//	for (j=n-1; a[j] >= m && j >= 0; j--)
//	{
//		a[j + 1] = a[j];
//	}
//	a[j+1] = m;
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//4.18直接插入排序
//int main()
//{
//	int i = 0; int j = 0; int k = 0;
//	int n = 0; int m = 0;
//	int a[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (j = 1; j < n; j++)//将整个数组a[n]遍历n-1遍
//	{
//		int p = a[j];
//		for (k = j - 1; k >= 0 && a[k] >= a[j]; k--)//将第j个元素向前插入
//		{
//			a[k + 1] = a[k];
//		}
//		a[k + 1] = p;
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", a[i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
// 4.19有一个3行4列的矩阵，编程求出其中最大的那个元素的值，以及它所在的行号与列号
//int main()
//{
//	int i = 0; int max = 0;
//	int n = 0; int row = 1;
//	int j = 0; int colum = 1;
//	int a[3][4] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &a[i][j]);
//			printf("%d\t", a[i][j]);
//			if ((j+1) % 4 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	max = a[0][0];
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (max < a[i][j])
//			{
//				max = a[i][j];
//				row = i + 1;
//				colum = j + 1;
//			}
//		}
//	}
//	printf("max:%d\n", max);
//	printf("row:%d\n", row);
//	printf("colum:%d\n", colum);
//	return 0;
//}
//4.20输入5个学生的数学、语文、英语3门课程的成绩，计算并输出每一门课程的平均成绩和每一位学生的平均成绩
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	float a[20][20] = { 0 };
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%f", &a[i][j]);
			printf("%d", a[i][j]);
			if ((j + 1) % 3 == 0)
			{
				printf("%f",)
			}
		}

	}
	return 0;
}
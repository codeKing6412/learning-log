#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>

//4.7求正整数n之内的所有完数及其因子
//int main()
//{
//	int a[100] = { 0 };
//	int sum = 0;
//	int i = 0; int j = 0; int m = 0;
//	int n = 0;
//	int k = 0;
//	scanf("%d", &n);
//	for (i = 2; i < n; i++)//从2开始判断完数
//	{
//		sum = 0; k = 0;
//		for (j = 1; j < i; j++)//判断i是否是完数
//		{
//			if (0 == i % j && j != 0)
//			{
//				sum += j;
//				a[k] = j;
//				k++;
//			}
//		}
//		if (i == sum)
//		{
//			printf("%d=1", i);
//			for (j = 0; j < k; j++)
//			{
//				printf("+%d", a[j]);
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}
//clss_3
//void space(int x)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//}
//int main()
//{
//	int c = '*';
//	int i = 0; int j = 0; int k = 0;
//	char arrow[5][8] = 
//	{
//	{0,0,0,0,0,1,0,0},
//	{0,0,0,0,0,0,1,0},
//	{1,1,1,1,1,1,1,1},
//	{0,0,0,0,0,0,1,0},
//	{0,0,0,0,0,1,0,0}
//	}; 
//	while(1)
//	{
//		for (i = 0; i < 5; i++) 
//		{
//			space(k%112);
//			for (j = 0; j < 8; j++) 
//			{
//				if (arrow[i][j] == 1) printf("*");
//				else if (arrow[i][j] == 0) printf(" ");
//			}
//			printf("\n");
//		}
//		Sleep(1);
//		system("cls");
//		k++;
//	}
//	return 0;
//}
//4.8顺序查找
//int main()
//{
//	int i, x = 1, t, a[10] = { 63,72,24,91,35,12,49,107,57,84 };
//	scanf("%d", &t);
//	for (i = 0; i < 10; i++)
//	{
//		if (t == a[i])
//		{
//			printf("查找成功，%d的下标：%d", t, i);
//			break;
//		}
//		if (10 == i)
//		{
//			printf("查找失败");
//		}
//
//	}
//	return 0;
//}
//4.9折半查找
//int main()
//{
//	int i, x, a[15] = { 4,9,14,16,17,19,28,33,42,51,64,75,84,91,100 };
//	int low = 0;
//	int high = 14;
//	int mid = high - (high - low) / 2;
//	scanf("%d", &x);
//	while (high >= low)
//	{
//		printf("查找区间下界，上界，中间点[%d，%d，%d]\n", low, high, mid);
//		if (a[mid] == x)
//		{
//			printf("查找成功，%d的下标：%d", x, mid);
//			break;
//		}
//		else if (a[mid] < x)
//		{
//			low = mid + 1;
//		}
//		else if (a[mid] > x)
//		{
//			high = mid - 1;
//		}
//		mid = high - (high - low) / 2;
//	}
//	if (high < low)
//	{
//		printf("查找区间下界，上界[%d，%d]，查找失败", low, high);
//	}
//	return 0;
//}
//4.10任意输入n个从小到大的整数的数列，然后输入一个整数插入到数列中，使数列保持从小到大的顺序
//int main()
//{
//	int a[15];
//	int i = 0;
//	int n = 0; int m = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);
//	for (i = n-1; i > 0; i--)
//	{
//		if (m < a[i])
//		{
//			a[i + 1] = a[i];
//		}
//		else
//		{
//			a[i + 1] = m;
//			break;
//		}
//	}
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//4.11任意输入n个从小到大的整数的数列，然后输入一个整数插入到数列中，使数列保持从小到大的顺序
//int main()
//{
//	int i = 0; int max;
//	int n = 0; int k = 0;
//	int a[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	max = a[0];
//	for (i = 1; i < n; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//			k = i;
//		}
//	}
//	for (i=k; i < n; i++)
//	{
//		a[i] = a[i+1];
//	}
//
//	for (i = 0; i < n-1; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//4.12删除数组零元素
//int main()
//{
//	int i = 0; int j = 0;
//	int n = 0;
//	int m = 0;
//	int arr[100] = { 0 }; int a[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			a[m++] = arr[i];
//		}
//	}
//	printf("%d\n", m);
//	for (i = 0; i < m; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//4.13全校学生的年龄在16到30岁之间，请用数组元素作为计数器来统计每一年龄的人数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a[100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	while (n!=-1)
//	{
//		a[n - 16]++;
//		scanf("%d", &n);
//	}
//	for (i = 0; i < 15; i++)
//	{
//		printf("%d岁：%d ", i + 16, a[i]);
//		if (0 == (i + 1) % 5)
//		{
//			printf("\n");
//		}
//
//	}
//	return 0;
//}
//4.14将两个有序的数组合并成一个有序数组
//int main()
//{
//	int i = 0;
//	int j = 0; int k = 0;
//	int n = 0; int m = 0;
//	int a[100] = { 0 };
//	int b[100] = { 0 };
//	int c[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);
//	for (j = 0; j < m; j++)
//	{
//		scanf("%d", &b[j]);
//	}
//	for (i = 0, j = 0, k = 0; i < n && j < m;)
//	{
//		if (a[i] < b[j])
//		{
//			c[k++] = a[i++];
//		}
//		else
//		{
//			c[k++] = b[j++];
//		}
//	}
//	while (i < n)
//	{
//		c[k++] = a[i++];
//	}
//	while (j < m)
//	{
//		c[k++] = b[j++];
//	}
//	for (i = 0; i < k; i++)
//	{
//		printf("%d ", c[i]);
//	}
//	return 0;
//}
//4.15编程实现交换数组a和数组b中的对应元素
//int main()
//{
//	int i = 0; int a[10] = { 0 };
//	int j = 0; int b[10] = { 0 };
//	int n = 0; int t = 0;
//	int m = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);
//	for (j = 0; j < m; j++)
//	{
//		scanf("%d", &b[j]);
//	}
//	for (i = 0, j = 0; i < n && j < m; i++, j++)
//	{
//		t = a[i];
//		a[i] = b[j];
//		b[j] = t;
//	}
//	while (i < n)
//	{
//		b[j] = a[i];
//		i++; j++;
//	}
//	while (j < m)
//	{
//		a[i] = b[j];
//		j++; i++;
//	}
//	for (i = 0; i < m; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (j = 0; j < n; j++)
//	{
//		printf("%d ", b[j]);
//	}
//	return 0;
//}
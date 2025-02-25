#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//4.3
//int main()
//{
//	int i = 0;
//	int arr[10];
//	int n = 0;
//	int sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &n);
//		arr[i] = n;
//	}
//	switch (arr[1])
//	{
//	case 12:sum += 30;
//	case 11:sum += 31;
//	case 10:sum += 30;
//	case 9:sum += 31;
//	case 8:sum += 31;
//	case 7:sum += 30;
//	case 6:sum += 31;
//	case 5:sum += 30;
//	case 4:sum += 31;
//	case 3:sum += 28;
//	case 2:sum += 31;
//	case 1:sum += arr[2];
//	}
//	if (arr[i] % 4 == 0 && arr[0] % 100 != 0 || arr[0] % 400 == 0)
//	{
//		printf("这一天是这一年的第%d天", sum + 1);
//	}
//	else
//	{
//		printf("这一天是这一年的第%d天", sum);
//	}
//	return 0;
//}
// 或解：
// int main()
// {
// int days[M] = {0,31,28,31,30,31,30,31,31,30,31,30,31};    //按人的习惯从1开始
//int year, month, day, sum = 0, i;
//scanf("%d%d%d", &year, &month, &day);
//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//days[2] += 1;
//
//for (i = 1; i <= month - 1; i++)
//{
//    sum += days[i];
//}
//sum += day;
//printf("这一天是这一年的第%d天\n", sum);
// return 0;
// }
//4.4
//int main()
//{
//	int arr[100] = {0};
//	int n; int i = 0; int j = 0; int tmp = 0; int k = 0;
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		arr[i] = n;
//		i++;
//		scanf("%d", &n);
//	}
//	int max = arr[0]; int nmax = 0;
//	int min = arr[0]; int nmin = 0;
//	for (j = 1; j < i; j++)
//	{
//		if (max < arr[j])
//		{
//			max = arr[j];
//			nmax = j;
//		}
//		if (min > arr[j])
//		{
//			min = arr[j];
//			nmin = j;
//		}
//	}
//	printf("最大值：%d,下标：%d\n", arr[nmax], nmax);
//	printf("最小值：%d,下标：%d\n", arr[nmin], nmin);
//	tmp = arr[nmin];
//	arr[nmin] = arr[nmax];
//	arr[nmax] = tmp;
//	tmp = nmin;
//	nmin = nmax;
//	nmax = tmp;
//	for (k = 0; k < i; k++)
//	{
//		printf("%d ", arr[k]);
//	}
//	return 0;
//}
//4.5
//int main()
//{
//	int arr[100] = {0};
//	int t = 0;
//	int i = 0; int j = 0;
//	int n = 0; 
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0, j = n - 1; i < j; i++, j--)
//	{
//		t = arr[i];
//		arr[i] = arr[j];
//		arr[j] = t;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//4.6逆天我自己用while循环先把逆序输出跟几位数一起搞出来了再逆序输出为顺序输出
//int main()
//{
//	int i = 0; int j = 0;
//	int n = 0;
//	int m = 1;
//	int arr[10] = { 0 };
//	int t = 0;
//	scanf("%d", &n);
//	while (n > pow(10, m))
//	{
//		int p = pow(10, m);
//		arr[m-1] = (n % p) / (p / 10);
//		m++;
//	}
//	arr[m-1] = n / pow(10, m) * 10;
//	printf("%d为%d位数\n", n, m);
//	for (i = 0, j = m - 1; i < j; j--, i++)
//	{
//		t = arr[i];
//		arr[i] = arr[j];
//		arr[j] = t;
//	}
//	printf("顺序输出为：");
//	for (i = 0; i < m; i++)
//	{
//		printf("%d,", arr[i]);
//	}
//	printf("\n");
//	for (i = 0, j = m - 1; i < j; j--, i++)
//	{
//		t = arr[i];
//		arr[i] = arr[j];
//		arr[j] = t;
//	}
//	printf("逆序输出为：");
//	for (i = 0; i < m; i++)
//	{
//		printf("%d,", arr[i]);
//	}
//	return 0;
//}
//4.7
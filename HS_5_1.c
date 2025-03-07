#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//第1关：通过指针变量间接访问变量
//int main()
//{
//	int* p; int* q; int a,b;
//	p = &a; q = &b;
//	scanf("%d%d", p,q);
//	printf("%d\n%d", *p, *q);
//	return 0;
//}
//第2关：交换两个指针变量的值
//int main()
//{
//	int a = 0; int b = 0;
//	int* p = &a; int* q = &b; int* tmp;
//	scanf("%d%d", p, q);
//	tmp = p; p = q; q = tmp;
//	printf("%d\n%d", *p, *q);
//	
//	return 0;
//}
//第3关：利用指针方法求数组的最大值和最小值
//int main()
//{
//	int i = 0;
//	int m, n, p;
//	scanf("%d%d%d", &m, &n, &p);
//	int* max = &m; int* min = &m;
//	if (m < n)
//	{
//		if (*max < n)
//		max = &n;
//	}
//	else
//	{
//		if (*min > n)
//		min = &n;
//	}
//	if (n < p)
//	{
//		if(*max < p)
//		max = &p;
//	}
//	else
//	{
//		if(*min > p)
//		min = &p;
//	}
//	printf("min=%d\nmax=%d", *min, *max);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		int s = (a + b + c) / 2;
//		float area = sqrt(s * (s - a) * (s - b) * (s - c));
//		printf("%f", area);
//	}
//	else
//	{
//		printf("is not triangle!");
//	}
//	return 0;
//}2.3
//int main()
//{
//    double a, b, c, derta;
//    scanf("%lf,%lf,%lf", &a, &b, &c);
//    derta = b * b - 4 * a * c;
//    double d = sqrt(derta);
//    double x1, x2;
//    double e = sqrt(-derta);
//    double s = -b / (2 * a), x = e / (2 * a);
//    if (derta > 0)
//    {
//        x1 = (-b + d) / (2 * a);
//        x2 = (-b - d) / (2 * a);
//        printf("x1=%.5lf\nx2=%.5lf\n", x1, x2);
//    }
//    if (derta == 0)
//    {
//        x1 = x2 = -b / (2 * a);
//        printf("x1=x2=%.5lf", s);
//    }
//    if (derta < 0)
//    {
//        printf("x1=%.5lf+%.5lfi\nx2=%.5lf-%.5lfi", s, x, s, x);
//    }
//	return 0;
//}2.4
//int main()
//{
//	float x = 0;
//	scanf("%f", &x);
//	if (x < -1)
//	{
//		printf("y=%.2f", sin(x * x));
//	}
//	else
//	{
//		if (x > 1)
//		{
//			printf("y=%.2f", exp(sqrt(x)) - 1);
//		}
//		else
//			printf("y=%.2f", fabs(x) + 2);
//
//		
//	}
//	return 0;
//}2.5
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = a / 10000;
//	int c = a % 10000 / 1000;
//	int d = a % 100 / 10;
//	int e = a % 10;
//	if (b == e & c == d)
//	{
//		printf("回文数");
//	}
//	else
//	{
//		printf("不是回文数");
//	}
//	return 0;
//}2.6
//int main()
//{
//	int i, a, b, c, d, t = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (a > d)
//	{
//		t = a;
//		a = d;
//		d = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	if (b > d)
//	{
//		t = b;
//		b = d;
//		d = t;
//	}
//	if (c > d)
//	{
//		t = c;
//		c = d;
//		d = t;
//	}
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}2.7
//int comper(const void* a, const void* b)
//{
//	return(*(int*)a - *(int*)b);
//}
//int main()
//{
//	int i = 0;
//	int arr[4] = { 0 };
//	for (i = 0; i <= 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizrof(int ), comper);
//	for (i = 0; i <= 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


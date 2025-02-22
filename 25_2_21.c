#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//int main()
//{
//	int a = 0; int b = 1; int sum = 0;
//	scanf("%d", &a);
//	while (b <= a)
//	{
//		sum += b;
//		b++;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}3.1
//int main()
//{
//	int i = 0; int a = 1; int sum = 0; int ssum = 0;
//	scanf("%d", &i);
//	while (a <= i)
//	{
//		sum = sum + a;
//		ssum = ssum + sum;
//		a++;
//	}
//	printf("sum=%d", ssum);
//
//	return 0;
//}3.2
//int main()
//{
//	int i = 0; int step = 0; int sum = 1; int n = 0; int result = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//		result += sum;
//	}
//	printf("1!+2!+…+%d!=%d",n,result);
//	return 0;
//}3.3
//3.4(第一次自主完成for循环嵌套，意义重大)
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int n = 0;
//	int mid = 0;
//	int t = 0;
//	int p = 0;
//	int s = 0;
//	scanf("%d%d", &a,&n);
//	for (i = 0; i < n; i++)
//	{
//		for (p = 1; p <= n; p++)
//		{
//			t = pow(10, n - p-i) * a;
//			mid += t;
//			s += mid;
//			mid = 0;
//		}
//		
//	}
//	printf("%d", s);
//	return 0;
//}
// 3.5
//int main()
//{
//	float i = 0;
//	float ztmp = 1;
//	float mtmp = 1;
//	float z = 2;
//	float m = 1;
//	float sum = 0;
//	float zsum = 0;
//	float msum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		zsum += z;
//		msum += m;
//		sum += z / m;
//		z += ztmp;
//		m += mtmp;
//		ztmp = z - ztmp;
//		mtmp = m - mtmp;
//	}
//	printf("%.2lf", sum);
//
//
//	return 0;
//}
//3.6未理解透彻，待询问
//int main()
//{
//	int i = 1;
//	int s = 1;
//	float sum = 1;
//	double n;
//	scanf("%lf", &n);
//	do
//	{
//		s *= i;
//		sum += 1.0 / s;
//		i++;
//	} while (1.0 / s > n);
//	printf("%d", i);
//	printf("e=%.6lf\n", sum);
//
//	return 0;
//}
//3.7
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int z = 0;
//	int f = 0;
//	do
//	{
//		scanf("%d", &n);
//			if (n < 0)
//			{
//				f++;
//		}
//			else if (n > 0)
//			{
//				z++;
//			}
//	} while (n != 0);
//	printf("正数个数为%d\n负数个数为%d", z, f);
//	return 0;
//}
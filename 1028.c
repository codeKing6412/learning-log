#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;//瓶颈点
//	scanf("%d", &n);
//	for (i = 1; i < n+1; i++)
//	{
//		ret = ret * i;//瓶颈点：不知道循环内容怎么表示
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//计算n的阶乘
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d\n", n);
	for (i = 1; i <n+1; i++)
	{
		ret = ret * i;
	}
	printf("%d\n", ret);
	return 0;
}
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n < 11; n++)
//	{
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int d = 0;
//	for (a = 1; a < 11; a++)
//	{
//		int c = 1;
//		for (b = 1; b <a+1; b++)
//		{
//			c = c * b;
//		}
//		d = d + c;
//	}
//	printf("%d\n", d);
//	return 0;
//}//自我练习+理解（最优解为）
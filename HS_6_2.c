#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//第1关：定义和调用求最大公约数和最小公倍数的函数
int gys(int x, int y)
{
	//辗转相除法
	//int s = 0;
	//int t = x % y;
	//while (t)
	//{
	//	x = y;
	//	y = t;
	//	t = x % y;
	//}
	//相减法
	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	return (y);
}
int gbs(int x, int y)
{
	int s = 0;
	s = x * y / gys(x, y);
	return (s);
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("最大公约数为：%d\n", gys(a, b));
	printf("最小公倍数为：%d\n", gbs(a, b));
	return 0;
}
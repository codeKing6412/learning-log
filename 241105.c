#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//int fac(int x)
//{
//	int i = 0;
//	int ret = 1;
//	//非递归方式：
//	//for (i = 1; i <= x; i++)
//	//{
//	//	ret *= i;
//	//}
//	//return ret;
//	//递归方式：
//	if (x <= 1)
//		return 1;
//	else
//		return x * fac(x - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d的阶乘是%d\n", n, ret);
//	return 0;
//}
//斐波那契数列的递归
//static long long count = 0;
//
//int fib(int x)
//{
//
//	if (3 == x)
//	{
//		count++;
//	}
//	if (x <= 2)
//		return 1;
//	else
//	{
//		double value = fib(x - 1) + fib(x - 2);
//		count++;
//
//		return value;
//	}
//}
//int main()
//{
//	printf("给我一个数字，我可以帮你计算斐波那契数列的第n项\n");
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fib(a);
//	printf("斐波那契数列中第%d项为%d\n", a, ret);
//	printf("本次过程计算了%d次\n", count);
//	char arr1[] = "you are much more friendly than the last fucking guy";
//	char arr2[] = "                                                    ";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	Sleep(1500);
//	system("cls");
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		printf("斐波那契数列中第%d项为%d\n", a, ret);
//		printf("本次过程计算了%d次\n", count);
//		printf("%s\n", arr2);
//
//		Sleep(100);
//		system("cls");
//		left++;
//	}   
//	printf("斐波那契数列中第%d项为%d\n", a, ret);
//	printf("本次过程计算了%d次\n", count);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i = 5)//这是赋值而不是判断，因此会打印5的死循环。
//			printf("%d", i);
//	}
//	return 0;
//}
//if语句是一种分支语句，可以实现单分支，也可以实现多分支。的
//switch语句中case后的表达式只能是整形常量表达式，char也属于整形常量表达式，因为存储是其ASCII码值。
//int func(int a)
//{
//	int b = 0;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 10;
//	default: b = 0;
//	}
//	return b;
//}
//
//int main()
//{
//	int a = 0;
//	func(a);
//	printf("%d", a);
//	return 0;
//}
//该代码最终返回0，因为自进入switch语句后就继续往下执行指令到default结尾
//作业：输入三个数从大到小输出
void Swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int mid = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
		Swap(&a, &b);
	if (a < c)
		Swap(&a, &c);
	if (b < c)
		Swap(&b, &c);

	printf("%d %d %d", a, b, c);
	return 0;
}
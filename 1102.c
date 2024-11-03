#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	//当实参传递给形参时形参相当于实参的一份临时拷贝
	//对形参的修改不能改变实参
//void swap(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("½»»»Ç°£ºa = %d£¬b = %d\n", a, b);
//	swap(&a, &b);
//	//传址调用：把函数外部创建变量的内存地址传递给函数的一种调用函数的方式。
//	//这种传参方式可以让函数和函数外边的变量建立起真正的联系
//	//也就是函数内部可以直接操作函数外部的变量。
//	printf("½»»»ºó£ºa = %d£¬b = %d\n", a, b);
//	return 0;
//}
//作业：写一个函数来判断这个数是不是素数
//int a = 0;
//int b = 0;
//int swap(int x,int y)
//{
//	for (y = 2; y < x; y++)
//	{
//		if (0 == x % y)
//		{
//			return 1;
//		}
//		else
//			return 0;
//	}
//}
//int main()
//{
//	//输入
//	scanf("%d", &a);
//	swap(a,b);
//	if (swap(a, b) == 1)
//		printf("该数不为素数");
//	else
//		printf("该数为素数");
//	return 0;
//}
//作业：写一个函数判断一年是不是闰年
//int func(int x, int y)
//{
//	if (x % 4 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	func(a, b);
//	if (func(a, b) == 1)
//		printf("该年为闰年");
//	else
//		printf("该年不是闰年");
//	return 0;
//}
int binary_search(int arr1[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
        int mid = left + (right - left) / 2;
		if (arr1[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr1[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//没找到
}
int main()
{
	int a = 0;
	int b = 0;
	int arr1[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 19;
	int sz = sizeof (arr1) / sizeof (arr1[0]);

	scanf("%d",&k);
	int ret = binary_search(arr1, k, sz);
	if (-1 == ret)
	{
		printf("找不到");
	}
	else
	{
		printf("找到了，下标是%d\n", ret);
	}

	return 0;
}
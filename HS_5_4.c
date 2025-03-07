#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//用指针实现数组元素循环移动
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a[10];
//	int n, m; int* p, * q; int t;
//	scanf("%d", &n);
//	for (p = a; p< a + n; p++) {//存入
//		scanf("%d", p);
//	}
//	scanf("%d", &m);
//	for (q = a,p = a + m - 1; p > q; q++,p--){//先逆置前m个元素
//		t = *p; *p = *q; *q = t;
//	}
//	for (q = a + m, p = a + n - 1; p > q; p--, q++) {//再逆置后n-m个元素
//		t = *p; *p = *q; *q = t;
//	}
//	for (q = a, p = a + n - 1; p > q; p--, q++) {//最后逆置整个数组
//		t = *p; *p = *q; *q = t;
//	}
//	for (p = a; p < a + n; p++){//打印
//		printf("%d ", *p);
//	}
//	return 0;
//}
//或解(创建辅助数组存放临时数据)：
int main()
{
	int i = 0;
	int a[10] = { 0 };
	int b[10] = { 0 };
	int* q, * p;
	int n = 0, m = 0 ;
	scanf("%d", &n);//元素个数
	for (i = 0; i < n; i++)//编入
	{
		scanf("%d", &a[i]);
	}
	p = a;//重置p
	scanf("%d", &m);//循环个数
	for (i = 0 ; i < n ; i++)
	{
		b[i] = *(p + ( i + m ) % n );//难点
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
		printf("%d ", a[i]);
	}
	return 0;
}
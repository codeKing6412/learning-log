#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(int* px, int* py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前：a = %d，b = %d\n", a, b);
	swap(&a, &b);
	printf("交换后：a = %d，b = %d\n", a, b);
	return 0;
}
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
	printf("����ǰ��a = %d��b = %d\n", a, b);
	swap(&a, &b);
	printf("������a = %d��b = %d\n", a, b);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int dec(int x)
{
	if (x > 9)
		dec(x / 10);
	printf("%d ", x % 10);
}
int main()
{
	printf("输入一个数，打印这个数的每一位");
	//输入
	int input = 0;
	scanf("%d", &input);
	//判断
	int ret = dec(input);
	return 0;
}
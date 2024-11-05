#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void print(unsigned int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
//练习：不允许创建临时变量，写一个求字符串的长度的代码。
//int my_strlen(int* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//非递归版如上
//递归版如下：
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = { "abcdefghijklmnopqrstuvwxyz"};
	int len = my_strlen(arr);
	
	printf("%d\n", len);
	return 0;
}
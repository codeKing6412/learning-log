#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��д�ж�һ���������Ƿ�Ϊ�����ĺ���
int main()
{
	int i = 0; int j = 0; int k = 0;
	int a[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 2; j < a[i]; j++)
		{
			if (a[i] % j == 0)
			{
				k++;
			}
		}
		if (0 == k)
		{
			printf("%d������.\n", a[i]);
		}
		else
		{
			printf("%d��������.\n", a[i]);
		}
		k = 0;
	}
	return 0;
}
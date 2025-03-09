#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[3][5] = { 0 };
	int i, j;
	int* p = a;
	for (i = 0; i < 3; i++)
	{
		int sum = 0;
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &a[i][j]);
			sum += a[i][j];//*(*(p+i)+j)
		}
		printf("第%d行和为：%d\n",i,sum);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//用指针数组求二维数组各行元素之和
#define N 3
#define M 5
int main()
{
    int a[N][M];
    int* p[N];
    int i, j, sum;
    for (i = 0; i < N; i++)
    {
        for (p[i] = a[i]; p[i] < a[i] + M; p[i]++)
        {
            scanf("%d", p[i]);
        }
    }
    for (i = 0; i < N; i++)
    {
        sum = 0;
        for (p[i] = a[i]; p[i] < a[i] + M; p[i]++)
        {
            sum += *p[i];
        }
        printf("第%d行和为：%d\n", i, sum);
    }
    return 0;
}
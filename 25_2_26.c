#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//4.16ð������
//int main()
//{
//	int i = 0; int a[10] = { 0 };
//	int n = 0; int t = 0; int j = 0; int k = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (k = 0; k < n - 1; k++)
//	{
//		for (j = 1; j < n; j++)
//		{
//			for (; i > 1; i--)
//			{
//				if (a[n - i] > a[n - i + 1])
//				{
//					t = a[n - i];
//					a[n - i] = a[n - i + 1];
//					a[n - i + 1] = t;
//				}
//			}
//		}
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", a[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//4.16�Ƚ���������Ԫ�������ֵ
//int main()
//{
//	int i = 0; int max; int t = 0;
//	int n = 0; int j = 0;
//	int a[10] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	max = a[0];
//	for (i = 0; i < n-1; i++)
//	{
//		if (a[i] > a[i+1])
//		{
//			t = a[i];
//			a[i] = a[i+1];
//			a[i+1] = t;
//			max = a[i];
//		}
//		else
//		{
//			if (a[i] < a[i + 1])
//			{
//				max = a[i];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//4.17��һ�������в�����Сֵ������Сֵ���һ������Ԫ�ؽ������
//int main()
//{
//	int i = 0; int j = 0;
//	int n = 0; int t = 0;
//	int a[10] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int min = a[0];
//	for (i = 1; i < n; i++)
//	{
//		if (min > a[i])
//		{
//			min = a[i];
//			j = i;
//		}
//	}
//	t = a[0];
//	a[0] =a[j];
//	a[j] = t;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//4.17��ѡ������
//int main()
//{
//	int i = 0; int min = 0;
//	int n = 0; int j = 0; int k = 0; int m = 0; int t = 0;
//	int a[10] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (m = 0; m < n - 1; m++)
//	{
//		min = a[m];
//		for (i = m; i < n; i++)
//		{
//			if (min > a[i])
//			{
//				min = a[i];
//				j = i;
//			}
//		}
//		t = a[m];
//		a[m] = a[j];
//		a[j] = t;
//		for (k = 0; k < n; k++)
//		{
//			printf("%d ", a[k]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//4.18��д����һ�������������嵽ԭ����������������У�ʹ���������Ȼ����
//int main()
//{
//	int i = 0; int j = 0;
//	int n = 0; int m = 0;
//	int a[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);
//	for (j=n-1; a[j] >= m && j >= 0; j--)
//	{
//		a[j + 1] = a[j];
//	}
//	a[j+1] = m;
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//4.18ֱ�Ӳ�������
//int main()
//{
//	int i = 0; int j = 0; int k = 0;
//	int n = 0; int m = 0;
//	int a[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (j = 1; j < n; j++)//����������a[n]����n-1��
//	{
//		int p = a[j];
//		for (k = j - 1; k >= 0 && a[k] >= a[j]; k--)//����j��Ԫ����ǰ����
//		{
//			a[k + 1] = a[k];
//		}
//		a[k + 1] = p;
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", a[i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
// 4.19��һ��3��4�еľ��󣬱��������������Ǹ�Ԫ�ص�ֵ���Լ������ڵ��к����к�
//int main()
//{
//	int i = 0; int max = 0;
//	int n = 0; int row = 1;
//	int j = 0; int colum = 1;
//	int a[3][4] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &a[i][j]);
//			printf("%d\t", a[i][j]);
//			if ((j+1) % 4 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	max = a[0][0];
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (max < a[i][j])
//			{
//				max = a[i][j];
//				row = i + 1;
//				colum = j + 1;
//			}
//		}
//	}
//	printf("max:%d\n", max);
//	printf("row:%d\n", row);
//	printf("colum:%d\n", colum);
//	return 0;
//}
//4.20����5��ѧ������ѧ�����ġ�Ӣ��3�ſγ̵ĳɼ������㲢���ÿһ�ſγ̵�ƽ���ɼ���ÿһλѧ����ƽ���ɼ�
//int main()
//{
//	int i = 0; float sum = 0;
//	int j = 0;
//	int n = 0;
//	int a[20][20] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("ÿ��ѧ����ƽ����:\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d\t", a[i][j]);
//			sum += a[i][j];
//		}
//		printf("%.1f\n", sum / 3);
//		sum = 0;
//	}
//	printf("ÿ�ſε�ƽ����:\n");
//	for (j = 0; j < 3; j++)
//	{
//		for (i = 0; i < 5; i++)
//		{
//			sum += a[i][j];
//		}
//		printf("%.1f\t", sum/5);
//		sum = 0;
//	}
//	return 0;
//}
// 4.21����M��N�еľ���A��B����̼��㲢�������A��B֮��
//int main()
//{
//	int m = 0; int i = 0;
//	int n = 0; int j = 0;
//	scanf("%d%d", &n, &m);
//	int A[10][10] = {0};
//	int B[10][10] = {0};
//	int C[10][10] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d",&A[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &B[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			C[i][j] = B[i][j] + A[i][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", C[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
// 4.22��̼���m��s�׾���A��s��n�׾���B֮��
//int main()
//{
//	int m = 0; int i = 0; int s = 0; int k = 0;
//	int n = 0; int j = 0; int i1 = 0; int j1 = 0; int i2, j2; int l = 0; int r = 0;
//	scanf("%d%d%d", &m, &s,&n);
//	int A[10][10] = { 0 };
//	int B[10][10] = { 0 };
//	int C[10][10] = { 0 };
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < s; j++)
//		{
//			scanf("%d", &A[i][j]);
//		}
//	}
//	for (i = 0; i < s; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &B[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)///��C�������
//	{
//		for (j = 0; j < n; j++)//��C�������
//		{
//			for (i1 = 0; i1 < s; i1++)
//			{
//				C[i][j]+=A[i][i1] * B[i1][j];
//			}
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d\t", C[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//4.23��ӡ���������
int main()
{
	int n = 0; int t[100][100] = { { 1 } };

	scanf("%d", &n); int i, j;
	for (i = 1; i < n; i++)
	{

		for (j = 0; j < n; j++)
		{
			if (0 == j || i==j )
			{
				t[i][j] = 1;
			}
			else
			{
				t[i][j] = t[i - 1][j] + t[i - 1][j - 1];
			}

		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if(0!=t[i][j])
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}

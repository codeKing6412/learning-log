#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��1�أ�����͵��������Լ������С�������ĺ���
int gys(int x, int y)
{
	//շת�����
	//int s = 0;
	//int t = x % y;
	//while (t)
	//{
	//	x = y;
	//	y = t;
	//	t = x % y;
	//}
	//�����
	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	return (y);
}
int gbs(int x, int y)
{
	int s = 0;
	s = x * y / gys(x, y);
	return (s);
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("���Լ��Ϊ��%d\n", gys(a, b));
	printf("��С������Ϊ��%d\n", gbs(a, b));
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//int fac(int x)
//{
//	int i = 0;
//	int ret = 1;
//	//�ǵݹ鷽ʽ��
//	//for (i = 1; i <= x; i++)
//	//{
//	//	ret *= i;
//	//}
//	//return ret;
//	//�ݹ鷽ʽ��
//	if (x <= 1)
//		return 1;
//	else
//		return x * fac(x - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d�Ľ׳���%d\n", n, ret);
//	return 0;
//}
//쳲��������еĵݹ�
//static long long count = 0;
//
//int fib(int x)
//{
//
//	if (3 == x)
//	{
//		count++;
//	}
//	if (x <= 2)
//		return 1;
//	else
//	{
//		double value = fib(x - 1) + fib(x - 2);
//		count++;
//
//		return value;
//	}
//}
//int main()
//{
//	printf("����һ�����֣��ҿ��԰������쳲��������еĵ�n��\n");
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fib(a);
//	printf("쳲����������е�%d��Ϊ%d\n", a, ret);
//	printf("���ι��̼�����%d��\n", count);
//	char arr1[] = "you are much more friendly than the last fucking guy";
//	char arr2[] = "                                                    ";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	Sleep(1500);
//	system("cls");
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		printf("쳲����������е�%d��Ϊ%d\n", a, ret);
//		printf("���ι��̼�����%d��\n", count);
//		printf("%s\n", arr2);
//
//		Sleep(100);
//		system("cls");
//		left++;
//	}   
//	printf("쳲����������е�%d��Ϊ%d\n", a, ret);
//	printf("���ι��̼�����%d��\n", count);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i = 5)//���Ǹ�ֵ�������жϣ���˻��ӡ5����ѭ����
//			printf("%d", i);
//	}
//	return 0;
//}
//if�����һ�ַ�֧��䣬����ʵ�ֵ���֧��Ҳ����ʵ�ֶ��֧����
//switch�����case��ı��ʽֻ�������γ������ʽ��charҲ�������γ������ʽ����Ϊ�洢����ASCII��ֵ��
//int func(int a)
//{
//	int b = 0;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 10;
//	default: b = 0;
//	}
//	return b;
//}
//
//int main()
//{
//	int a = 0;
//	func(a);
//	printf("%d", a);
//	return 0;
//}
//�ô������շ���0����Ϊ�Խ���switch����ͼ�������ִ��ָ�default��β
//��ҵ�������������Ӵ�С���
void Swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int mid = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
		Swap(&a, &b);
	if (a < c)
		Swap(&a, &c);
	if (b < c)
		Swap(&b, &c);

	printf("%d %d %d", a, b, c);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void Add(int* x)
//{
//	(*x)++;
//}
//int main()
//{
//	int a = 0;
//	Add(&a);
//	printf("%d\n", a);	
//	Add(&a);
//	printf("%d\n", a);
//	Add(&a);
//	printf("%d\n", a);
//	Add(&a);
//	printf("%d\n", a);
//	return 0;
//}
//��������Ƕ�׵��ã����ǲ���Ƕ�׶��塣
//�����ĵ�λ����ƽ�ȵģ��������ڲ�����������
//��ʽ����
//strlen���ص���size_t���ͣ����޷�������
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));//�����ַ��������С�
//	return 0;
//}��ʽ���ʵ�ǰ�������Ǻ����з���ֵ
//int main(void)��д����������Ҫ��main����������
//int main(int argc[], char argv[], char* envp[])��main��������������
//{
//
//	return 0;
//}
//�����Ѻ�������������������Ҫ�Ƚ��к���������
//#pragma comment(lib,"add.lib")��������������ͷ�ļ��;�̬��
//%u ���ӡ�޷�������%d���ӡ�з��ŵ�����
//�ݹ鲻�����ݹ飬��Ҫͣ������������
// 1.���������������ﵽ����֮��ݹ�㲻�ټ���
// 2.Խ��Խ�ӽ���������
#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n = 7;
    printf("The %dth Fibonacci number is %d\n", n, fibonacci(n));
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ָ��ʵ������Ԫ��ѭ���ƶ�
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a[10];
//	int n, m; int* p, * q; int t;
//	scanf("%d", &n);
//	for (p = a; p< a + n; p++) {//����
//		scanf("%d", p);
//	}
//	scanf("%d", &m);
//	for (q = a,p = a + m - 1; p > q; q++,p--){//������ǰm��Ԫ��
//		t = *p; *p = *q; *q = t;
//	}
//	for (q = a + m, p = a + n - 1; p > q; p--, q++) {//�����ú�n-m��Ԫ��
//		t = *p; *p = *q; *q = t;
//	}
//	for (q = a, p = a + n - 1; p > q; p--, q++) {//���������������
//		t = *p; *p = *q; *q = t;
//	}
//	for (p = a; p < a + n; p++){//��ӡ
//		printf("%d ", *p);
//	}
//	return 0;
//}
//���(����������������ʱ����)��
int main()
{
	int i = 0;
	int a[10] = { 0 };
	int b[10] = { 0 };
	int* q, * p;
	int n = 0, m = 0 ;
	scanf("%d", &n);//Ԫ�ظ���
	for (i = 0; i < n; i++)//����
	{
		scanf("%d", &a[i]);
	}
	p = a;//����p
	scanf("%d", &m);//ѭ������
	for (i = 0 ; i < n ; i++)
	{
		b[i] = *(p + ( i + m ) % n );//�ѵ�
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
		printf("%d ", a[i]);
	}
	return 0;
}
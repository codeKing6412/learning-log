#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��1�أ���ͬ����������ռ�ڴ���ֽ���
//int main()
//{
//    char a2, b2[5], c2[10], d2[3][4], e2[2][5];
//    double a3, b3[5], c3[10], d3[3][4], e3[2][5];
//    float a4, b4[5], c4[10], d4[3][4], e4[2][5];
//    printf("a2 = %d\n", sizeof(a2));
//    printf("b2 = %d\n", sizeof(b2));
//    printf("b2[0] = %d\n", sizeof(b2[0]));
//    printf("c2 = %d\n", sizeof(c2));
//    printf("d2 = %d\n", sizeof(d2));
//    printf("d2[0] = %d\n", sizeof(d2[0]));
//    printf("d2[0][0] = %d\n", sizeof(d2[0][0]));
//    printf("e2 = %d\n", sizeof(e2));
//    printf("e2[0] = %d\n", sizeof(e2[0]));
//    printf("e2[0][0] = %d\n", sizeof(e2[0][0]));
//    printf("a3 = %d\n", sizeof(a3));
//    printf("b3 = %d\n", sizeof(b3));
//    printf("b3[0] = %d\n", sizeof(b3[0]));
//    printf("c3 = %d\n", sizeof(c3));
//    printf("d3 = %d\n", sizeof(d3));
//    printf("d3[0] = %d\n", sizeof(d3[0]));
//    printf("d3[0][0] = %d\n", sizeof(d3[0][0]));
//    printf("e3 = %d\n", sizeof(e3));
//    printf("e3[0] = %d\n", sizeof(e3[0]));
//    printf("e3[0][0] = %d\n", sizeof(e3[0][0]));
//    printf("a4 = %d\n", sizeof(a4));
//    printf("b4 = %d\n", sizeof(b4));
//    printf("b4[0] = %d\n", sizeof(b4[0]));
//    printf("c4 = %d\n", sizeof(c4));
//    printf("d4 = %d\n", sizeof(d4));
//    printf("d4[0] = %d\n", sizeof(d4[0]));
//    printf("d4[0][0] = %d\n", sizeof(d4[0][0]));
//    printf("e4 = %d\n", sizeof(e4));
//    printf("e4[0] = %d\n", sizeof(e4[0]));
//    printf("e4[0][0] = %d", sizeof(e4[0][0]));
//	return 0;
//}
//��2�أ���ָ�������ָ�������ά����
//int main()
//{
//	int a[3][4], i, j;
//	int(*p)[4];
//	p = a;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", *(p+i)+j);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", a[i][j]);//Ϊʲô������*((p+i)+j)
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{
	char* a2, ** b2, * c2[4], (*d2)[5];
	double* a3, ** b3, * c3[4], (*d3)[5];
	float* a4, ** b4, * c4[4], (*d4)[5];
	printf("a2 = %d\n", sizeof(a2));
	printf("b2 = %d\n", sizeof(b2));
	printf("c2 = %d\n", sizeof(c2));
	printf("d2 = %d\n", sizeof(d2));
	printf("a3 = %d\n", sizeof(a3));
	printf("b3 = %d\n", sizeof(b3));
	printf("c3 = %d\n", sizeof(c3));
	printf("d3 = %d\n", sizeof(d3));
	printf("a4 = %d\n", sizeof(a4));
	printf("b4 = %d\n", sizeof(b4));
	printf("c4 = %d\n", sizeof(c4));
	printf("d4 = %d\n", sizeof(d4));
	return 0;
	//ָ�������ͬ��һ�����������Ǳ����ĵ�ַ
	//��ͬһϵͳ�µ�ַ���ȶ�����ͬ�ģ����Բ�ͬ���͵�ָ�볤�ȶ�һ����
	//32λ�Ĳ���ϵͳ��Ѱַ�ռ���0~2��32�η�����0x00000000~0xFFFFFFFF��ָ�볤��Ϊ4���ֽڣ�
	//64λ�Ĳ���ϵͳ��Ѱַ�ռ���0~2��64�η�����0x0000000000000000~0xFFFFFFFFFFFFFFFF��ָ�볤��Ϊ8���ֽ�
	//���ԣ�������char*, int*, float* �������Զ������͵�ָ��
	//�������͵�ָ�������32λϵͳ�϶���4�ֽڣ� 64λϵͳ�϶���8�ֽڡ�
}
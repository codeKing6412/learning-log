#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//第1关：不同数据类型所占内存的字节数
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
//第2关：用指向数组的指针遍历二维数组
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
//			printf("%d ", a[i][j]);//为什么不能用*((p+i)+j)
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
	//指针变量不同于一般变量，存的是变量的地址
	//在同一系统下地址长度都是相同的，所以不同类型的指针长度都一样。
	//32位的操作系统的寻址空间是0~2的32次方，即0x00000000~0xFFFFFFFF，指针长度为4个字节；
	//64位的操作系统的寻址空间是0~2的64次方，即0x0000000000000000~0xFFFFFFFFFFFFFFFF，指针长度为8个字节
	//所以，不管是char*, int*, float* ，还是自定义类型的指针
	//所有类型的指针变量在32位系统上都是4字节， 64位系统上都是8字节。
}
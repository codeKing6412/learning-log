#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int dec(int x)
{
	if (x > 9)
		dec(x / 10);
	printf("%d ", x % 10);
}
int main()
{
	printf("����һ��������ӡ�������ÿһλ");
	//����
	int input = 0;
	scanf("%d", &input);
	//�ж�
	int ret = dec(input);
	return 0;
}
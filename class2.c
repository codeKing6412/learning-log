#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
//int main()
//{
//	//��������
//	float j_price = 12.5;
//	float d_price = 2.5;
//	short j_num = 0;
//	short d_num = 0;
//	float j_tot = 0;
//	float d_tot = 0;
//	char name[10];
//	float sum = 0;
//	float pay = 0;
//	//��ȡʱ��
//	time_t raw_time;
//	struct tm* time_info;
//	time(&raw_time);
//	time_info = localtime(&raw_time);
//	//��������
//	printf("����������Ա��");
//	gets(name);
//	printf("�����빺��ļ�����ӵ�������");
//	scanf("%hd", &j_num);
//	printf("�����빺��Ķ�����������");
//	scanf("%hd", &d_num);
//	printf("�������տ��ܶ");
//	scanf("%f", &pay);
//	//��������
//	j_tot = j_num * j_price;
//	d_tot = d_num * d_price;
//	//СƱ�Ű�
//	printf("\t\t������ѧ��Ʒ�㹺������\n");
//	printf("\t����Ա��");
//	puts(name);
//	printf("\t");
//	printf("���ڣ�%04d.%02d.%02d\n",time_info->tm_year+1900,time_info->tm_mon+1,time_info->tm_mday);
//	printf("��������������������������������������������������������������������������������������������������������\n");
//	printf("Ʒ��\t\t����\t\t����\t\tС��\n");
//	if (0!=j_num)//�ж���Ʒ�����Ƿ�Ϊ��
//	{
//		printf("�������\t %hd\t\t%.2f\t\t%.2f\n", j_num, j_price, j_tot);
//
//	}
//	if (0!=d_num)//�ж���Ʒ�����Ƿ�Ϊ��
//	{
//		printf("����\t\t %hd\t\t%.2f\t\t%.2f\n", d_num, d_price, d_tot);
//
//	}
//	sum = j_tot + d_tot;
//	printf("�ϼƣ�\t\t\t\t\t\t%.2f\n", sum);
//	printf("�գ�\t\t\t\t�����\t\t%.2f\n", sum);
//	printf("�տ��ܶ\t\t%.2f\t\t �һأ� %.2f\n", pay, pay - sum);
//	printf("ʵ�գ�\t\t\t\t\t\t%.2f\n", sum);
//	printf("����������������������������������������%02d:%02d:%02d��������������������������������������������������\n", time_info->tm_hour, time_info->tm_min, time_info->tm_sec);
//	printf("\t��ӭ�ٴι��٣��Ź��绰��8888888");
//
//	return 0;
//}
//int main()
//{
//	char a = '-3';
//	char b = '5';
//	short c = '��';
//	char m[10];
//	char n[10];
//	char p[20];
//	int *i;
//	for (i = 7; i>=0 ; i--)
//	{
//		if (a & 0x0001 == 1)
//		{
//			a[i] = 1;
//		}
//		else
//		{
//			a[i] = 0;
//		}
//		a = a >> 1;
//	}
//	for (i = 0; i < 8; i++)
//	{
//		printf("%d", a[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	int num,x,a,t = 0;
//	int place = 0;
//	int i = 0;
//	scanf("%d", &num);
//	place = log10((double)num) + 1;
//	printf("%d��%dλ��", num, place);
//	printf("˳�����Ϊ��");
//	t = pow(10, place - 1);
//	int c = num;
//	while (t > 0)
//	{
//		x = num / t;
//		if (num > 10)
//			printf("%d,", x);
//		else
//			printf("%d\n", x);
//		num %= t;
//		t /= 10;
//	}
//	printf("�������Ϊ��");
//	while (c > 0)
//	{
//		a = c % 10;
//		if (c > 10)
//		
//			printf("%d,", a);
//		else
//		{
//			printf("%d\n", a);
//			c /= 10;
//		}
//	}
//	return 0;
//}2.14
//int main()
//{
//	int year, month, day = 0;
//	scanf("%d%d%d", &year, &month, &day);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		case 12:num += 30;
//        case 11:num += 31;
//        case 10:num += 30;
//        case 9:num += 31;
//        case 8:num += 31;
//        case 7:num += 30;
//        case 6:num += 31;
//        case 5:num += 30;
//        case 4:num += 31;
//        case 3:num += 29;
//        case 2:num += 31;
//        case 1:num += day;
//            break;
//	}
//    printf("��һ������һ��ĵ�%d��", num);
//    else
//    {
//        case 12:num += 30;
//        case 11:num += 31;
//        case 10:num += 30;
//        case 9:num += 31;
//        case 8:num += 31;
//        case 7:num += 30;
//        case 6:num += 31;
//        case 5:num += 30;
//        case 4:num += 31;
//        case 3:num += 28;
//        case 2:num += 31;
//        case 1:num += day;
//            break;
//    }
//    printf("��һ������һ��ĵ�%d��", num);
//	return 0;
//}2.15
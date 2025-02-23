#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//3.8
//int main()
//{
//    int letter = 0, space = 0, digit = 0, other = -1;
//    char ch;
//    //字母、数字、空格、其它字符的判定方法
//    do
//    {
//        scanf("%c", &ch);
//        if (ch == 'a' || ch == 'b' || ch == 'c' || ch == 'd' || ch == 'e' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'i' || ch == 'j' || ch == 'k' || ch == 'l' || ch == 'm' || ch == 'n' || ch == 'o' || ch == 'p' || ch == 'q' || ch == 'r' || ch == 's' || ch == 't' || ch == 'u' || ch == 'v' || ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z' || ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D' || ch == 'E' || ch == 'F' || ch == 'G' || ch == 'H' || ch == 'I' || ch == 'J' || ch == 'K' || ch == 'L' || ch == 'M' || ch == 'N' || ch == 'O' || ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U' || ch == 'V' || ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z')
//        {
//            letter = letter + 1;
//        }
//        else if (ch == ' ')
//        {
//            space = space + 1;
//        }
//        else if (ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9' || ch == '0')
//        {
//            digit = digit + 1;
//        }
//        else { other = other + 1; }
//    } while (ch != '#');
//    printf("字母有%d个，空格有%d个，数字有%d个，其他字符有%d个\n", letter, space, digit, other);
//	return 0;
//}
//3.9
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	int i = m;
//	for(i=2;i<m;i++)
//	{
//		if (m % i == 0)
//		{
//			break;
//		}
//	}
//	if (i == m)
//		printf("%d is a prime number", m);
//	else
//		printf("%d is not a prime number", m);
//
//	return 0;
//}
//3.10
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int num = 0;
//	int n;
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				k++;
//			}
//			
//		}
//		if (0 == k)
//		{
//			printf("%d,", i);
//			num++;
//		}
//		k = 0;
//	}
//	printf("%d以内共有%d个素数", n, num);
//	return 0;
//}
//3.11
//int main()
//{
//	int sum = 0; int i = 0; int n = 0;
//	do
//	{
//		scanf("%d", &n);
//		if (n <= 0)
//		{
//			continue;
//		}
//		sum += n;
//		i++;
//	} while (i < 5);
//	printf("sum=%d", sum);
//	return 0;
//}
//3.12
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int sum = 0;
//	float ave = 0;
//	float he = 0;
//	float le = 100;
//	float n = 0;
//	do
//	{
//		scanf("%f", &n);
//		if (n > 100&& n < -1)
//		{
//			continue;
//		}
//		if (n > -1 && n < 0)
//		{
//			continue;
//		}
//		if (-1 == n)
//		{
//			break;
//		}
//		num++;
//		sum += n;
//		if (n > he)
//		{
//			he = n;
//		}
//		if (n < le&&n!=-1)
//		{
//			le = n;
//		}
//	} while (1);
//	ave = sum / num;
//	printf("全班一共有学生：%d\n全班平均分：%.1f\n全班最高分：%.1f\n全班最低分：%.1f\n", num, ave, he, le);
//	return 0;
//}
//3.13
//int main()
//{
//	int m = 0; int n = 0; int max; int min = 0;
//	int m1 = 0; int n1 = 0; int t = 1;
//	scanf("%d%d", &m, &n);
//	m1 = m; n1 = n;
//	//while (1)
//	//{
//	//	if (m > n)
//	//	{
//	//		m = m - n;
//	//	}
//	//	else if (m < n)
//	//	{
//	//		n = n - m;
//	//	}
//	//	else if (m = n)
//	//	{
//	//		break;
//	//	}
//	//}
//	//max = m;//相减法
//	//或解：
//	while (t!=0)
//	{
//		if (m % n == 0)
//		{
//			 max = n;
//			break;
//		}
//		else if (m % n != 0)
//		{
//			t = m % n;
//			m = n; n = t;
//		}
//	}
//	max = n;//辗转相除法
//	min = m1 * n1 / max;
//	printf("最大公因数为：%d\n最小公倍数是：%d", max, min);
//	return 0;
//}
//3.14
//int main()
//{
//	int a = 0; int b =1; int i;
//	for (i = 1; i <= 12; i++)
//	{
//		a = a + b;
//		b = a - b;
//		printf("第%d月：%d\n", i, a);
//	}
//	return 0;
//}
//3.15
//int main()
//{
//	int i = 0; int j = 0;
//	for (i = 1; i <= 9; i++)//纵向打印
//	{
//		for (j = 1; j <= 9; j++)//横向打印
//		{
//			if (i > j)
//			{
//				printf("\t");
//			}
//			else
//			{
//				printf("%d*%d=%d\t", i, j, i * j);
//
//			}
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//2.1����һ��ѧ����ĳ�ſγɼ�score���ж�ѧ�������ſγɼ��Ƿ񼰸�
//int main()
//{
//    float  score;
//    scanf("%f", &score);
//    if (score >= 60)
//        printf("���ſγɼ�����");
//    else
//        printf("���ſγɼ�������");
//
//    return 0;
//}
// 2.2����һ��ĳ��ļ���������������Ƿ�������
// int main()
//{
//	int year;
//	//printf("���������:");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d�������ꡣ", year);
//	}
//	else
//	{
//		printf("%d�겻�����꣡", year);
//	}
//	return 0;
//}
//2.3����������ʵ��������ܹ��������Σ�����������ε������ѡ��ṹ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		int s = (a + b + c) / 2;
//		float area = sqrt(s * (s - a) * (s - b) * (s - c));
//		printf("%f", area);
//	}
//	else
//	{
//		printf("is not triangle!");
//	}
//	return 0;
//}
//2.4����һԪ���η��̵�����ϵ���󷽳̵ĸ���ѡ��ṹ��
//int main()
//{
//    double a, b, c, derta;
//    scanf("%lf,%lf,%lf", &a, &b, &c);
//    derta = b * b - 4 * a * c;
//    double d = sqrt(derta);
//    double x1, x2;
//    double e = sqrt(-derta);
//    double s = -b / (2 * a), x = e / (2 * a);
//    if (derta > 0)
//    {
//        x1 = (-b + d) / (2 * a);
//        x2 = (-b - d) / (2 * a);
//        printf("x1=%.5lf\nx2=%.5lf\n", x1, x2);
//    }
//    if (derta == 0)
//    {
//        x1 = x2 = -b / (2 * a);
//        printf("x1=x2=%.5lf", s);
//    }
//    if (derta < 0)
//    {
//        printf("x1=%.5lf+%.5lfi\nx2=%.5lf-%.5lfi", s, x, s, x);
//    }
//	return 0;
//}
//2.5��дһ������Ƕ�׵�if-else���ʵ����ֶκ���ֵ
//int main()
//{
//	float x = 0;
//	scanf("%f", &x);
//	if (x < -1)
//	{
//		printf("y=%.2f", sin(x * x));
//	}
//	else
//	{
//		if (x > 1)
//		{
//			printf("y=%.2f", exp(sqrt(x)) - 1);
//		}
//		else
//			printf("y=%.2f", fabs(x) + 2);
//
//		
//	}
//	return 0;
// }
// 2.6�ж�һ��5λ�������Ƿ��ǻ�����
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = a / 10000;
//	int c = a % 10000 / 1000;
//	int d = a % 100 / 10;
//	int e = a % 10;
//	if (b == e & c == d)
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("���ǻ�����");
//	}
//	return 0;
//}
// 2.7��һ��������5λ����������Ҫ��������Ǽ�λ��
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (0 == a / 10000)
//	{
//		if (0 == a / 1000)
//		{
//			if (0 == a / 100)
//			{
//				if (0 == a / 10)
//				{
//					printf("%d��һλ��", a);
//				}
//				else
//				{
//					printf("%d�Ƕ�λ��", a);
//				}
//			}
//			else
//			{
//				printf("%d����λ��", a);
//			}
//		}
//		else
//		{
//			printf("%d����λ��", a);
//		}
//	}
//	else
//	{
//		printf("%d����λ��", a);
//	}
//	return 0;
// }
// 2.8����һ���ַ����жϸ��ַ��Ǵ�дӢ����ĸ��СдӢ����ĸ���ո񣬻��������ַ�
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//	{
//		printf("%c��Ӣ����ĸ", ch);
//	}
//	else if (ch >= '0' && ch <= '9')
//	{
//		printf("%c�������ַ�",ch);
//	}
//	else if (ch == ' ')
//	{
//		printf("%c�ǿո��ַ�",ch);
//	}
//	else
//	{
//		printf("%c�������ַ�", ch);
//	}
//	return 0;
//}
// 2.9����һ���ַ����жϸ��ַ��Ƿ�ΪСдӢ����ĸ������������СдӢ����ĸѭ�������ĵ�6��Сд��ĸ
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	if (ch >= 'a' && ch <= 'z')
//	{
//		printf("��СдӢ����ĸ��ѭ����6Ϊ%c", (ch - 'a' + 6) % 26 + 'a');
//	}
//	else
//	{
//		printf("����СдӢ����ĸ");
//	}
//	return 0;
//}
// 2.10����4�����������4�����е������
//int main()
//{
//	int a;int b;int c;int d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			if (a > d)
//				printf("max=%d\n", a);
//			else// (a < d)
//				printf("max=%d\n", d);
//		}
//		else //(a < c)
//		{
//			if (a > d)
//				printf("max=%d\n", c);
//			else//(a < d)
//			{
//				if (c > d)
//					printf("max=%d\n", c);
//				else//(c < d)
//					printf("max=%d\n", d);
//			}
//		}
//	}
//	else// (a < b)
//	{
//		if (b > c)
//		{
//			if (b > d)
//				printf("max=%d\n", b);
//			else//(b < d)
//				printf("max=%d\n", d);
//		}
//		else//(b < c)
//		{
//			if (c > d)
//				printf("max=%d\n", c);
//			else//(c < d)
//				printf("max=%d\n", d);
//		}
//	}
//	return 0;
//}//����Ƕ�װ棨ȫ����ʶ��û�в�����
// �Ž�1��
//int main()
//{
//	int arr[4] = { 0 };
//	//0 1 2 3
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}
//�Ž�2��
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	scanf("%d", &max);
//	while (i < 4)
//	{
//		scanf("%d", &n);//
//		if (n > max)
//			max = n;
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}
// ����4������������ý��������4�����е������
//int main()
//{
//	int a, b, c, d,t;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	if (c > d)
//	{
//		t = c;
//		c = d;
//		d = t;
//	}
//	printf("max=%d", d);
//	return 0;
// }
// ����4������������ñȽϷ����4�����е����ֵ
//int main()
//{
//    int a, b, c, d, t, max;
//    scanf("%d%d%d%d", &a, &b, &c, &d);
//    if (a < b)
//    {
//        a = b;
//        max = a;
//
//    }
//    if (a < c)
//    {
//        a = c;
//        max = a;
//    }
//    if (a < d)
//    {
//        a = d;
//        max = a;
//    }
//    printf("max=%d", a);
//	return 0;
// }
// ����4���������������̨�������4�����е����ֵ
//int main()
//{
//    int a, b, c, d, max;
//    scanf("%d%d%d%d", &a, &b, &c, &d);
//    max = a;
//    if (b > max)
//        max = b;
//    if (c > max)
//        max = c;
//    if (d > max)
//        max = d;
//    printf("max=%d", max);
//	return 0;
// }
// 2.11����4��������Ҫ����С����˳�������4����
// ����4������������ý�������С����˳�������4����
//int main()
//{
//	int i, a, b, c, d, t = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (a > d)
//	{
//		t = a;
//		a = d;
//		d = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	if (b > d)
//	{
//		t = b;
//		b = d;
//		d = t;
//	}
//	if (c > d)
//	{
//		t = c;
//		c = d;
//		d = t;
//	}
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}
// ����4������������ñȽϷ���С����˳�������4����
//int main()
//{
//	int a, b, c, d, t,max;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (a > d)
//	{
//		t = a;
//		a = d;
//		d = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	if (b > d)
//	{
//		t = b;
//		b = d;
//		d = t;
//	}
//	if (c > d)
//	{
//		t = c;
//		c = d;
//		d = t;
//	}
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}
// 2.12��switch���ʵ������һ���ٷ��Ƶĳɼ���������ĵȼ�
//int main()
//{
//    int score;
//    scanf("%d", &score);
//    switch (score / 10)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:printf("E\n");
//        break;
//    case 6:printf("D\n");
//        break;
//    case 7:printf("C\n");
//        break;
//    case 8:
//        if (score % 10 > 4)
//            printf("A\n");
//        else
//            printf("B\n");
//        break;
//    default:printf("A\n");
//    }
//    return 0;
//}
//2.13��switch���ʵ�ֶ����������1~7ת�����������ڼ������������ֲ�ת��
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    switch (n)
//    {
//    case 1:printf("Monday\n");
//        break;
//    case 2:printf("Tuesday\n");
//        break;
//    case 3:printf("Wednesday\n"); break;
//    case 4:printf("Thursday\n"); break;
//    case 5:printf("Friday\n"); break;
//    case 6:printf("Saturday\n"); break;
//    case 7:printf("Sunday\n"); break;
//    default:printf("error\n");
//    }
//    return 0;
//}
// 2.14��switch���ʵ������һ��������5λ����������Ҫ���������Ǽ�λ���ڷֱ����ÿһλ���֢۰����������λ����
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
//}
// 2.15��switch���ʵ������ĳ��ĳ��ĳ�գ�������һ������һ��ĵڼ���
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
//2.16��switch����дһ���򵥵�ʵ�������������
//int main()
//{
//	double a, b;
//	char c;
//	scanf("%lf%c%lf", &a, &c, &b);
//	switch (c)
//	{
//	case '+':printf("%.2f+%.2f=%.2f", a, b, a + b); break;
//	case '-':printf("%.2f-%.2f=%.2f", a, b, a - b); break;
//	case '*':printf("%.2f*%.2f=%.2f", a, b, a * b); break;
//	case '/':if (0 == b)
//	{
//		printf("error"); 
//	}
//			else
//	{
//		printf("%.2f/%.2f=%.2f", a, b, a / b); break;
//	}
//	default:printf("error");
//	}
//	return 0;
//}
// 3.1��whileѭ����s=1+2+3+��+n��ֵ
//int main()
//{
//	int a = 0; int b = 1; int sum = 0;
//	scanf("%d", &a);
//	while (b <= a)
//	{
//		sum += b;
//		b++;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}
// 3.2��whileѭ����s=1+(1+2)+(1+2+3)+....+(1+2+3+....+n) ��ֵ
//int main()
//{
//	int i = 0; int a = 1; int sum = 0; int ssum = 0;
//	scanf("%d", &i);
//	while (a <= i)
//	{
//		sum = sum + a;
//		ssum = ssum + sum;
//		a++;
//	}
//	printf("sum=%d", ssum);
//
//	return 0;
//}3.3��forѭ���� s=1��+ 2��+ 3��+ ��+n����ֵ
//int main()
//{
//	int i = 0; int step = 0; int sum = 1; int n = 0; int result = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//		result += sum;
//	}
//	printf("1!+2!+��+%d!=%d",n,result);
//	return 0;
//}
//3.4��forѭ����s=a+aa+aaa+aaaa+......��ֵ(��һ���������forѭ��Ƕ�ף������ش�)
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int n = 0;
//	int mid = 0;
//	int t = 0;
//	int p = 0;
//	int s = 0;
//	scanf("%d%d", &a,&n);
//	for (i = 0; i < n; i++)
//	{
//		for (p = 1; p <= n; p++)
//		{
//			t = pow(10, n - p-i) * a;
//			mid += t;
//			s += mid;
//			mid = 0;
//		}
//		
//	}
//	printf("%d", s);
//	return 0;
//}
// 3.5��forѭ����������У�2/1��3/2��5/3��8/5��13/8��21/13������ǰn��֮��
//int main()
//{
//	float i = 0;
//	float ztmp = 1;
//	float mtmp = 1;
//	float z = 2;
//	float m = 1;
//	float sum = 0;
//	float zsum = 0;
//	float msum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		zsum += z;
//		msum += m;
//		sum += z / m;
//		z += ztmp;
//		m += mtmp;
//		ztmp = z - ztmp;
//		mtmp = m - mtmp;
//	}
//	printf("%.2lf", sum);
//
//
//	return 0;
//}
//3.6��do��whileѭ������ʽe=1+1/1!+1/2!+1/3!+��+1/n!���� e ��ֵ(����Ϊ 1e-6)δ���͸������ѯ��
//int main()
//{
//	int i = 1;
//	int s = 1;
//	float sum = 1;
//	double n;
//	scanf("%lf", &n);
//	do
//	{
//		s *= i;
//		sum += 1.0 / s;
//		i++;
//	} while (1.0 / s > n);
//	printf("%d", i);
//	printf("e=%.6lf\n", sum);
//
//	return 0;
//}
//3.7��do��whileѭ��ʵ������һ������ͳ������������
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int z = 0;
//	int f = 0;
//	do
//	{
//		scanf("%d", &n);
//			if (n < 0)
//			{
//				f++;
//		}
//			else if (n > 0)
//			{
//				z++;
//			}
//	} while (n != 0);
//	printf("��������Ϊ%d\n��������Ϊ%d", z, f);
//	return 0;
//}
//3.8����һ���ַ����ֱ�ͳ�Ƴ����е�Ӣ����ĸ���ո����ֺ������ַ��ĸ���
//int main()
//{
//    int letter = 0, space = 0, digit = 0, other = -1;
//    char ch;
//    //��ĸ�����֡��ո������ַ����ж�����
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
//    printf("��ĸ��%d�����ո���%d����������%d���������ַ���%d��\n", letter, space, digit, other);
//	return 0;
//}
//3.9����������m���ж�m�Ƿ�������
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
//3.10����������n�����n���ڵ�ȫ�������������n����������������
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
//	printf("%d���ڹ���%d������", n, num);
//	return 0;
//}
//3.11�������һ����������̼��㲢���������������5���������ĺ�
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
//3.12����ĳ��C���Կ��Գɼ�������δ֪����-1��Ϊ������־��������100�֣����������룬����ȫ�����߷֡���ͷ���ƽ����
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
//	printf("ȫ��һ����ѧ����%d\nȫ��ƽ���֣�%.1f\nȫ����߷֣�%.1f\nȫ����ͷ֣�%.1f\n", num, ave, he, le);
//	return 0;
//}
//3.13��������������m��n���������Լ������С������
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
//	//max = m;//�����
//	//��⣺
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
//	max = n;//շת�����
//	min = m1 * n1 / max;
//	printf("�������Ϊ��%d\n��С�������ǣ�%d", max, min);
//	return 0;
//}
//3.14��Fibonacci���е�ǰ12����
//int main()
//{
//	int a = 0; int b =1; int i;
//	for (i = 1; i <= 12; i++)
//	{
//		a = a + b;
//		b = a - b;
//		printf("��%d�£�%d\n", i, a);
//	}
//	return 0;
//}
//3.15��ӡ�žų˷��ھ���
//int main()
//{
//	int i = 0; int j = 0;
//	for (i = 1; i <= 9; i++)//�����ӡ
//	{
//		for (j = 1; j <= 9; j++)//�����ӡ
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
//3.16��1000�������е�ˮ�ɻ���
//int main()
//{
//	int i = 0; 
//	int n = 0;
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		num1 = i / 100;
//		num2 = i % 100 / 10;
//		num3 = i % 10;
//		if (i == num1 * num1 * num1 + num2 * num2 * num2 + num3 * num3 * num3)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//3.17����������n���ж�n�Ƿ�������
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum += i;
//		}
//	}
//	if (sum == n)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}
//3.18��������n֮�ڵ���������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//			}
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//		sum = 0;
//	}
//	return 0;
//}
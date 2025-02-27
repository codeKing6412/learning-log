#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//2.1输入一个学生的某门课成绩score，判断学生的这门课成绩是否及格
//int main()
//{
//    float  score;
//    scanf("%f", &score);
//    if (score >= 60)
//        printf("这门课成绩及格！");
//    else
//        printf("这门课成绩不及格！");
//
//    return 0;
//}
// 2.2输入一个某年的纪年数，输出该年是否是闰年
// int main()
//{
//	int year;
//	//printf("请输入年份:");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d年是闰年。", year);
//	}
//	else
//	{
//		printf("%d年不是闰年！", year);
//	}
//	return 0;
//}
//2.3输入三个正实数，如果能构成三角形，编程求三角形的面积（选择结构）
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
//2.4输入一元二次方程的三个系数求方程的根（选择结构）
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
//2.5编写一程序，用嵌套的if-else语句实现求分段函数值
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
// 2.6判断一个5位正整数是否是回文数
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
//		printf("回文数");
//	}
//	else
//	{
//		printf("不是回文数");
//	}
//	return 0;
//}
// 2.7给一个不多于5位的正整数，要求输出它是几位数
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
//					printf("%d是一位数", a);
//				}
//				else
//				{
//					printf("%d是二位数", a);
//				}
//			}
//			else
//			{
//				printf("%d是三位数", a);
//			}
//		}
//		else
//		{
//			printf("%d是四位数", a);
//		}
//	}
//	else
//	{
//		printf("%d是五位数", a);
//	}
//	return 0;
// }
// 2.8输入一个字符，判断该字符是大写英文字母，小写英文字母，空格，还是其它字符
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//	{
//		printf("%c是英文字母", ch);
//	}
//	else if (ch >= '0' && ch <= '9')
//	{
//		printf("%c是数字字符",ch);
//	}
//	else if (ch == ' ')
//	{
//		printf("%c是空格字符",ch);
//	}
//	else
//	{
//		printf("%c是其他字符", ch);
//	}
//	return 0;
//}
// 2.9输入一个字符，判断该字符是否为小写英文字母，如果是输出其小写英文字母循环排序后的第6个小写字母
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	if (ch >= 'a' && ch <= 'z')
//	{
//		printf("是小写英文字母，循环加6为%c", (ch - 'a' + 6) % 26 + 'a');
//	}
//	else
//	{
//		printf("不是小写英文字母");
//	}
//	return 0;
//}
// 2.10输入4个整数，输出4个数中的最大者
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
//}//暴力嵌套版（全靠意识，没有操作）
// 优解1：
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
//优解2：
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
// 输入4个整数，编程用交换法输出4个数中的最大者
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
// 输入4个整数，编程用比较法输出4个数中的最大值
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
// 输入4个整数，编程用擂台赛法输出4个数中的最大值
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
// 2.11输入4个整数，要求按由小到大顺序输出这4个数
// 输入4个整数，编程用交换法由小到大顺序输出这4个数
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
// 输入4个整数，编程用比较法由小到大顺序输出这4个数
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
// 2.12用switch语句实现输入一个百分制的成绩后输出它的等级
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
//2.13用switch语句实现对输入的数字1~7转换成文字星期几，对其它数字不转换
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
// 2.14用switch语句实现输入一个不多余5位的正整数，要求①求出它是几位数②分别输出每一位数字③按逆序输出各位数字
//int main()
//{
//	int num,x,a,t = 0;
//	int place = 0;
//	int i = 0;
//	scanf("%d", &num);
//	place = log10((double)num) + 1;
//	printf("%d是%d位数", num, place);
//	printf("顺序输出为：");
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
//	printf("逆序输出为：");
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
// 2.15用switch语句实现输入某年某月某日，计算这一天是这一年的第几天
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
//    printf("这一天是这一年的第%d天", num);
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
//    printf("这一天是这一年的第%d天", num);
//	return 0;
//2.16用switch语句编写一个简单的实数四则运算程序
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
// 3.1用while循环求s=1+2+3+…+n的值
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
// 3.2用while循环求s=1+(1+2)+(1+2+3)+....+(1+2+3+....+n) 的值
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
//}3.3用for循环求 s=1！+ 2！+ 3！+ …+n！的值
//int main()
//{
//	int i = 0; int step = 0; int sum = 1; int n = 0; int result = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//		result += sum;
//	}
//	printf("1!+2!+…+%d!=%d",n,result);
//	return 0;
//}
//3.4用for循环求s=a+aa+aaa+aaaa+......的值(第一次自主完成for循环嵌套，意义重大)
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
// 3.5用for循环求分数序列：2/1，3/2，5/3，8/5，13/8，21/13，…，前n项之和
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
//3.6用do…while循环按公式e=1+1/1!+1/2!+1/3!+…+1/n!计算 e 的值(精度为 1e-6)未理解透彻，待询问
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
//3.7用do…while循环实现输入一批整数统计正负数个数
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
//	printf("正数个数为%d\n负数个数为%d", z, f);
//	return 0;
//}
//3.8输入一行字符，分别统计出其中的英文字母、空格、数字和其他字符的个数
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
//3.9输入正整数m，判断m是否是素数
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
//3.10输入正整数n，输出n以内的全部素数，并输出n以内所有素数个数
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
//3.11随机输入一批整数，编程计算并且输出这批整数中5个正整数的和
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
//3.12输入某班C语言考试成绩，人数未知，用-1作为结束标志，若大于100分，则重新输入，计算全班的最高分、最低分与平均分
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
//3.13输入两个正整数m和n，求其最大公约数和最小公倍数
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
//3.14求Fibonacci数列的前12个数
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
//3.15打印九九乘法口诀表
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
//3.16求1000以内所有的水仙花数
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
//3.17输入正整数n，判断n是否是完数
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
//3.18求正整数n之内的所有完数
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
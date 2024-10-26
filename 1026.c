#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	while (a <= 10)
//	{
//		if (5 == a)
//			continue;
//		printf("%d", a);
//		a++;
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", password);
//	getchar();
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码（Y/N）:");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != '\n')
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//作业：转换ASCII码值为字符并打印（I can do it!）
//优解如下：
//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int sz = sizeof(arr)/ sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
////printf("%d", sizeof(arr[0]));//仅用作测试字符串的数据大小
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\n",year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}
////作业：通过八字数打印生日日期
//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	printf("The each subject score of No.%d is%.2f,%.2f,%.2f.", id, c, math, eng);
//	return 0;
//}
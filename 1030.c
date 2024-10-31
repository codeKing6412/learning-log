#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", &password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登陆成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (3 == i)
//		printf("您已连续输入错误三次，账号已冻结，退出程序");
//	return 0;
//}
//简单的密码程序设计
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了");
		}
		else
		{
			printf("恭喜你，猜对了");
			break;
		}
	}
}
void menu()
{
	printf("********************************\n");
	printf("*******     1.play      ********\n");
	printf("*******     0.exit      ********\n");
	printf("********************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，请重新选择");
			break;
		}
		}while (input);
	return 0;
}
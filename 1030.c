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
//		printf("����������:>");
//		scanf("%s", &password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��½�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (3 == i)
//		printf("������������������Σ��˺��Ѷ��ᣬ�˳�����");
//	return 0;
//}
//�򵥵�����������
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("�������:>");
		scanf("%d", guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���");
		}
		else
		{
			printf("��ϲ�㣬�¶���");
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
		printf("��ѡ��:>");
		scanf("%d", input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
		}while (input);
	return 0;
}
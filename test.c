#define _CRT_SECURE_NO_WARNINGS
//������Ϸ���߼�
//��Ϸ�����ʵ��
#include "game.h"
void menu()
{
	printf("************************************\n");
	printf("******     1.play  0.exit     ******\n");
	printf("************************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	//��ʼ�����̵ĺ���
	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����");
			break;
		}
	} while (input);
	return 0;
} 
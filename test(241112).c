#define _CRT_SECURE_NO_WARNINGS
//测试游戏的逻辑
//游戏代码的实现
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
	//初始化棋盘的函数
	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);
	//玩家下棋
	while (1)
	{
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
	}
}
int main()
{
	srand((unsigned int) time(NULL));//设置随机数生成的起点
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误");
			break;
		}
	} while (input);
	return 0;
} 

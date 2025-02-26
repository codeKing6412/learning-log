#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
//clss_3
// the original version
 void space(int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		printf(" ");
	}
}
int main()
{
	int c = '*'; int i = 0;
	while (1)
	{
		space(i%112);
		printf("%6c", c);
		space(i % 112);
		printf("%7c", c);
		space(i % 112);
		printf("********");
		space(i % 112);
		printf("%7c", c);
		space(i % 112);
		printf("%6c", c);

	}
}
//void space(int x)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//}
//int main()
//{
//	int c = '*';
//	int i = 0; int j = 0; int k = 0;
//	char arrow[5][8] = 
//	{
//	{0,0,0,0,0,1,0,0},
//	{0,0,0,0,0,0,1,0},
//	{1,1,1,1,1,1,1,1},
//	{0,0,0,0,0,0,1,0},
//	{0,0,0,0,0,1,0,0}
//	}; 
//	while(1)
//	{
//		for (i = 0; i < 5; i++) 
//		{
//			space(k%112);
//			for (j = 0; j < 8; j++) 
//			{
//				if (arrow[i][j] == 1) printf("*");
//				else if (arrow[i][j] == 0) printf(" ");
//			}
//			printf("\n");
//		}
//		Sleep(1);
//		system("cls");
//		k++;
//	}
//	return 0;
//}

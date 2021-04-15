#include "1.h"
void menu(void)
{
	printf("*****************************************\n");
	printf("*****    1.---------->开始          *****\n");
	printf("*****    0.---------->结束          *****\n");
	printf("*****************************************\n");

}
void game(void)
{
	//1.埋雷棋盘
	char ml[ROWS][COLS] = { 0 };
	//2.找雷棋盘 
	char zl[ROWS][COLS] = { 0 };
	//初始化
	csh(ml, ROWS, COLS, '0');//11*11
	csh(zl, ROWS, COLS, '*');
	//打印棋盘/=
	/*display(ml, ROW, COL);*///9*9
	display(zl, ROW, COL);
	//埋雷
	mailei(ml, ROW, COL);
	//打印棋盘
	//display(ml, ROW, COL);


	//找雷
	finemine(ml, zl, ROW, COL);

}
void text(void)
{
	int num;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入数字用以确定是否进入游戏:(1/0)");
		scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			printf("即将进入游戏:----->\n");
			game();
			break;
		case 0:
			printf("即将退出游戏------->\n");
			Sleep(1000);
			system("cls");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}



	} while (num);

}
int main()
{
	text();
	return 0;
}
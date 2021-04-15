#include "1.h"
//棋盘初始化
void csh(char ml[ROWS][COLS], int rows, int  cols, char m)
{
	int i, j;
	for (i = 0; i < ROWS; i++)
	{
		j = 0;
		for (j = 0; j < COLS; j++)
		{
			ml[i][j] = m;
		}
	}
}
//棋盘打印
void display(char ml[ROWS][COLS], int row, int  col)
{
	int i, j;
	//打印行标
	for (i = 0; i <= row; i++)
	{
		printf(" %d ", i);

	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);
		j = 0;
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", ml[i][j]);
		}
		printf("\n");
	}
}
void mailei(char ml[ROWS][COLS], int row, int col)
{
	int a, b;
	int count = EASY_LEI;
	while (count)
	{
		a = rand() % row + 1;
		b = rand() % col + 1;
		if (ml[a][b] == '0')
		{
			ml[a][b] = '1';
			count--;
		}

	}

}
int hjkjj(char ml[ROWS][COLS], int x, int y)
{
	return ml[x - 1][y] + ml[x - 1][y - 1] + ml[x - 1][y + 1] + ml[x][y - 1] + ml[x][y + 1] + ml[x + 1][y - 1] + ml[x + 1][y] + ml[x + 1][y + 1] - 8 * '0';
}
void finemine(char ml[ROWS][COLS], char  zl[ROWS][COLS], int  row, int  col)
{
	int a, b;
	int num;
	num = 0;

	//输入值用以判断是否超过
	while (num < ROW * COL - EASY_LEI)
	{
		printf("请输入要走的位置(例子:1 2一行二列):");
		scanf_s("%d %d", &a, &b);
		if (a >= 1 && a <= ROW && b >= 1 && b <= COL)
		{
			if (ml[a][b] == '1')
			{
				printf("不好意思你被炸死了\n");
				display(ml, ROW, COL);
				break;
			}
			else
			{
				int f = 0;
				//没被炸死;
				f = hjkjj(ml, a, b);
				zl[a][b] = f + '0';
				display(zl, ROW, COL);

			}
			num++;
		}
		else
		{
			printf("输入坐标非法,请重新输入!\n");
		}


	}
	if (num == ROW * COL - EASY_LEI)
	{
		printf("You WIN!\n");

	}
}
#include "1.h"
//���̳�ʼ��
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
//���̴�ӡ
void display(char ml[ROWS][COLS], int row, int  col)
{
	int i, j;
	//��ӡ�б�
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

	//����ֵ�����ж��Ƿ񳬹�
	while (num < ROW * COL - EASY_LEI)
	{
		printf("������Ҫ�ߵ�λ��(����:1 2һ�ж���):");
		scanf_s("%d %d", &a, &b);
		if (a >= 1 && a <= ROW && b >= 1 && b <= COL)
		{
			if (ml[a][b] == '1')
			{
				printf("������˼�㱻ը����\n");
				display(ml, ROW, COL);
				break;
			}
			else
			{
				int f = 0;
				//û��ը��;
				f = hjkjj(ml, a, b);
				zl[a][b] = f + '0';
				display(zl, ROW, COL);

			}
			num++;
		}
		else
		{
			printf("��������Ƿ�,����������!\n");
		}


	}
	if (num == ROW * COL - EASY_LEI)
	{
		printf("You WIN!\n");

	}
}
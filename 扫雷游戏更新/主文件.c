#include "1.h"
void menu(void)
{
	printf("*****************************************\n");
	printf("*****    1.---------->��ʼ          *****\n");
	printf("*****    0.---------->����          *****\n");
	printf("*****************************************\n");

}
void game(void)
{
	//1.��������
	char ml[ROWS][COLS] = { 0 };
	//2.�������� 
	char zl[ROWS][COLS] = { 0 };
	//��ʼ��
	csh(ml, ROWS, COLS, '0');//11*11
	csh(zl, ROWS, COLS, '*');
	//��ӡ����/=
	/*display(ml, ROW, COL);*///9*9
	display(zl, ROW, COL);
	//����
	mailei(ml, ROW, COL);
	//��ӡ����
	//display(ml, ROW, COL);


	//����
	finemine(ml, zl, ROW, COL);

}
void text(void)
{
	int num;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��������������ȷ���Ƿ������Ϸ:(1/0)");
		scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			printf("����������Ϸ:----->\n");
			game();
			break;
		case 0:
			printf("�����˳���Ϸ------->\n");
			Sleep(1000);
			system("cls");
			break;
		default:
			printf("�����������������\n");
			break;
		}



	} while (num);

}
int main()
{
	text();
	return 0;
}
#pragma once
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define EASY_LEI 10        //定义埋雷的数量
#define ROW 9
#define COL 9
#define ROWS ROW+3
#define COLS COL+3
void text(void);
void menu(void);
void game(void);
void csh(char ml[ROWS][COLS], int rows, int  cols, char m);
void display(char ml[ROWS][COLS], int row, int  col);
void mailei(char ml[ROWS][COLS], int row, int col);
void finemine(char ml[ROWS][COLS], char zl[ROWS][COLS], int  row, int  col);
int hjkjj(char ml[ROWS][COLS], int x, int y);
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "task2.h"
#define RATIO 7  //���������� ��� �������� RATIO �� ����� ����������� ��� ��������� (��������������) ������������� ���������
void clearMatrix(char(*arr)[M]) // ���������� ������� ���������
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			arr[i][j] = ' ';
}
void fillMatrix(char(*arr)[M]) // ���������� ������� ��������� �����������
{
	for (int i = 0; i < (N / 2); i++)
		for (int j = 0; j <( M / 2); j++)
			if (rand() % RATIO == 0)
				arr[i][j] = '*';
}
void setMatrix(char(*arr)[M])
{
	for (int i = 0; i < (N / 2); i++) 
		for (int j = 0; j < (M / 2); j++)
			arr[i][M - 1 - j] = arr[i][j]; // ����������� �������� � ������ ������� ��������
	for (int i = 0; i < (N / 2); i++)
		for (int j = 0; j < M; j++)
			arr[N - 1 - i][j] = arr[i][j]; // ����������� ��������� � ���������� ����� �������
}
void printMatrix(char(*arr)[M])
{
	system("cls"); // ������ ���������� ������
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			putchar(arr[i][j]);
		putchar('\n');
	}
}
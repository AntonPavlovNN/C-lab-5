/*
������� ������ ��������� � ���� ��������� ������������������ �����:

������� ������� (���������� ���������)	clearMatrix
������������ ��������� ������� �������� ������ ��������� (�� ��������) fillMatrix
����������� �������� � ������ ��������� �������	setMatrix
������� ������
����� ������� �� ����� (���������)	printMatrix
��������� ��������
������� � ���� 1.
*/
#include "task2.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <Windows.h>

int main()
{

	char arr[M][M] = { NULL };
	srand(time(0));
	while (1)
	{
		clearMatrix(arr);
		fillMatrix(arr);
		Sleep(550);
		setMatrix(arr);
		system("cls");
		printMatrix(arr);
		Sleep(500);
	}
	return 0;
}
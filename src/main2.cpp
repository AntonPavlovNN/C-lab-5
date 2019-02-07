/*
�������� ��������� ������������, ��������� �� ����� �����������, 
������������ �� ����������� ������������� ��������� �*�.
����������� ����������� � ��������� ���������� �������, � ����� ��� ����� 
� ����������� ���������� � ��������� ��� �����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

int main()
{
	srand(time(NULL));
	char arr[ROWS][COLS] = { '\0' };

	while (1)
	{
		clearMatrix(arr);  // filling a two-dimensional array (matrix) with spaces
		fillMatrix(arr);  // filling the upper left quadrant of the matrix with '*' characters
		setMatrix(arr);  // copying elements to other areas of the matrix
		printMatrix(arr);
		//printf("\n\n\n\n");
		

		clock_t now;
		now = clock();
		while (clock() < (now + 3 * CLOCKS_PER_SEC))  // time delay for 3 sec.
			;

		clearScreen();
	}

	return 0;
}
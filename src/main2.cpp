//�������� ��������� ������������, ��������� �� ����� �����������, ������������ �� ����������� ������������� ��������� �*�.
//����������� ����������� � ��������� ���������� �������, � ����� ��� ����� � ����������� ���������� � ��������� ��� �����.

#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"

int main() {
	int sleep = 1000;
	char arr[N][M] = { '\0' };

	do {
		clearMatrix(arr);
		fillMatrix(arr);
		setMatrix(arr);
		system("cls");
		printMatrix(arr);
		clock_t begin = clock();
		while (clock() < begin + sleep);
	} while (1);
	return 0;
}
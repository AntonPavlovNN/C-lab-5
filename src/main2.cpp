//�������� ��������� ������������, ��������� �� ����� �����������, ������������ �� ����������� ������������� ��������� �*�.
//����������� ����������� � ��������� ���������� �������, � ����� ��� ����� � ����������� ���������� � ��������� ��� �����.

#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"

int main() {

	char arr[N][M] = { '\0' };

	do {
		clearMatrix(arr);
		fillMatrix(arr);
		setMatrix(arr);
		system("cls");
		printMatrix(arr);
		Sleep(1000);
	} while (1);
	return 0;
}
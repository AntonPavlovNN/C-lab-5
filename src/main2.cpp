#include <stdlib.h>
#include <time.h>
#include "task2.h"

int main()
{
	char arr[N][M];
	srand(time(NULL));
	while (1)
	{
		clearMatrix(arr); // ���������� ������� ���������
		fillMatrix(arr); // ������������ ������ �������� ���������
		setMatrix(arr); // ���������� ��������� ����� ������� �����������
		printMatrix(arr); // ����� ������� �� �����
		clock_t t1 = clock();
		while (clock() - t1 < (CLOCKS_PER_SEC * 2)) // �������� � 2 �������
			clock_t t1 = clock();
	}
	return 0;
}
/* �������� ���������, �������������� ��������� ������� ������� ������� ����� ������ ������ ���������� �����,
����� ������� � ����������, �� ���� ������ � ����� ����� �������� �� ������.*/

#include "task3.h"

int main() {
	char str[WORDS];
	char buf[WORDS] = { '\0' };
	FILE *fp;
	
	puts("We use File: \"Lb5_sort3.txt\"");
	fp = fopen("Lb5_sort3.txt", "r");											//�������� ��������� ����� � �������� ��������
	if (fp == NULL)
		puts("Opening is failed");												//�������� ������������ �������� �����

	while (fgets(str, WORDS, fp) != NULL) {
		puts(mixLine(str, buf));												//������ ����� � ������ � ������� �� �����
		int i = 0;
		while (i < WORDS)
			buf[i++] = '\0';
	}

	if (fclose(fp) == EOF)
		puts("File \"Lb5_sort3.txt\" is not closed");
	return 0;
}
/*�������� ���������, ������� ������ ��������� ��������� ���� � ������������ �������� ����� � ������ ������*/

#include "task1.h"

int main() {
	char str[WORDS];
	char buf[WORDS] = { '\0' };
	FILE *fp;

	puts("We use File: \"Lb5_sort4.txt\"");
	fp = fopen("Lb5_sort4.txt", "r");												//�������� ��������� ����� � �������� ��������
	fp == NULL ? puts("Opening is failed!") : puts("Opening is successful!");		//�������� ������������ �������� �����

	while (fgets(str, WORDS, fp) != NULL) {
		randomWords(str, buf);														//������ ����� � ������
		puts(buf);
		int i = 0;
		while (i < WORDS)
			buf[i++] = '\0';
	}

	if (fclose(fp) == EOF)
		puts("File \"Lb5_sort4.txt\" is not closed");
	return 0;
}
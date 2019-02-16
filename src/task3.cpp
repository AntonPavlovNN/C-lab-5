#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 15
#define C 32

char *mixChars(char *in, char *out)
{
	int i = 0, j =0, k=0;
	char temp = { NULL };
	while (*in && *in != ' ')
		out[i++] = *in++;
	out[i] = '\0';
	if (out[i-1] == '\n') // ������� \n, ���� �� �������� ������ �����
		out[i-1] = '\0';
	if (i < 4) // ���� � ����� �� 1-�� �� 3-� ��������, ��...
		return out; // ...���������� ����� ��� ���������
	else if (i == 4) // ���� � ����� 4 �������, ��...
	{
		temp = out[1];
		out[1] = out[2];
		out[2] = temp; // ...������ 2-� � 3-� ������� (1-� � 2-� �������� �������)
		return out; // ���������� ���������� �����
	}
	else if (i > 4)
	{
		int iteration = strlen(out)+1;
		for (i = 0; i < iteration; i++)
		{
			j = 1 + rand() % (strlen(out) - 2);
			k = 1 + rand() % (strlen(out) - 2);
			while (j == k) // ��������� ������ ���������
				k = 1 + rand() % (strlen(out) - 2);
			temp = out[j];
			out[j] = out[k];
			out[k] = temp;
		}
		return out;
	}
}
char *mixLine(char *instr, char * outstr)
{
	int i = 0, j = 0, count = 0;
	char in[C] = { NULL };
	while (instr[i] != '\0') // �������� ������ ������ �������� ������� ����� � ������ ����������
	{
		if (instr[i] != ' ' && instr[i] != '\0') // ������� ������ ������ �����
		{
			char out[C] = { NULL }; // ��������� ������ ��� ����������� �� �-�� "mixChars" �����
			char *p = &instr[i]; // ��������� �� 1-� ������ �����
			mixChars(p, out); // �������� �-�� ��� ������������� �������� � �����
			for (int k = 0; out[k] != '\0'; k++, j++)
				outstr[j] = out[k]; // ������������ ���������� ����� � ������ ��� ������
			outstr[j] = ' ';
			j++;
			while (instr[i] != ' ' && instr[i] != '\0')
				i++;
			i--;
		}
		i++;
	}
	outstr[j-1] = '\0'; 
	return outstr;
}
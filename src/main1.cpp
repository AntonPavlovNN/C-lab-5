/*
�������� ���������, ������� ��������� �� ������������ ������ �
������� �� �� �����, ��������� ����� � ��������� �������.

���������:
��� ������� ������ ��������� ������ ���������� �� char, � ������� ��������� ������ ������ �������� ������� �����. 
����� ������������ ����� ������, ��� ������������� ����� ������� �� ����������. 
������ �� ���������� ������ ����������� ������ ������� randomWords.
������� ���� ����� ���� �����, �� �������, ����� ����� �� ����������� � ������ ���������� �� ��������.
*/
#define size_str 255
#include <stdio.h>
#include "task1.h"
#include <time.h>
#include <stdlib.h>
int main()
{
	char in[size_str] = " Hi, I am Nikolay", out[size_str] = { NULL };
	//fgets(in, size_str, stdin);
	srand(time(0));
	//printf("%s", randomWords(in, *out));
	//randomWords(in, *out);
	randomWords(in, out);
	printf("%s", out);
	return 0;
}
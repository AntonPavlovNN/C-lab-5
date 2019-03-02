#include "task1.h"

char * randomWords(char * in, char * out) {
	char * index[WORDS];
	int flag = 0, word = 0, temp = 0, end_string = 0;

	for (int u = 0; u < strlen(in); u++) {
		if (in[u] == '\n')
			in[u] = '\0';
	}

	for (int i = 0; i < strlen(in); i++) {										//����������� ���������� �� ������ ����� � ������
		if (in[i] == ' ' && flag == 1)											//�������� �� ��������� �����
			flag = 0;
		if (in[i] != ' ' && flag == 0) {										//�������� ������ ������ �����
			index[word++] = &in[i];
			flag = 1;
		}
	}

	char spase[WORDS] = { '\0' };
	srand(time(0));
	for (int i = 0; i < word; i++) {											//���������, ���� �� ���������� ��� �����
			do {
				temp = rand() % word;											//����� ���������� ��������� �� �����
				if (index[temp] != NULL) {										//�������� �� ������������� ������� �����
					for (int j = 0; *index[temp]; j++) {						//��������� ������, ������������ � ����� �����
						spase[j] = *index[temp]++;
						if (*index[temp] == ' ' || *index[temp] == '\0') {		//��������� ���������� �����, �� ������� ��������� ���������
							spase[j + 1] = '\0';
							break;
						}
					}
					strcat(out, spase);											//���������� ����� � ��������� ������
					out[strlen(out)] = ' ';										//���������� ������� ����� ����� �����
					index[temp] = NULL;											//��������� ��������� �� �������������� �����
					break;
				}
			} while (1);
		}
		out[strlen(out)] = '\0';												//��������� ����� ��������� ������
	return out;
}
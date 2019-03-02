#include "task3.h"

char *mixChars(char *in, char *out) {
	
	char * index[WORDS] = {NULL};
	int temp = 0, end_word = 0;
	
	end_word = strlen(in);
	if (end_word <= 3) {														//���� � ����� �� ����� 3-� ����, �� �� ������������ ��
		for (int u = 0; u <= end_word; u++)
			out[u] = in[u];
			return out;
	}
	
	for (int chars = 1; chars <= (end_word - 2); chars++)						//����������� ��������� �� ����� �� ������ �� �������������
		index[chars] = &in[chars];

	srand(time(NULL));
		out[0] = in[0];															//��������� ������ �����
		for (int i = 1; i <= end_word - 2; i++) {								//���������, ���� �� ���������� ��� ����� �� ������ �� �������������
			do {
				temp = 1 + rand() % (end_word - 1);								//����� ���������� ��������� �� �����
				if (index[temp] != NULL) {										//�������� �� ������������� ������ �����
					out[i] = *index[temp];
					index[temp] = NULL;											//��������� ��������� �� �������������� �����
					break;
				}
			} while (1);														//��������� ����, ���� ������������ ��������� �� ��������� �����
		}
		out[end_word - 1] = in[end_word - 1];
		out[end_word] = '\0';
	return out;
}


char *mixLine(char *instr, char * outstr) {
	char spase[WORDS] = { '\0' };												//������ ��� ������ ����� ����� �������������� ����
	char rew_word[WORDS] = { '\0' };											//����� � ������������� �������
	char * index[WORDS];
	int flag = 0, word = 0, temp = 0, end_string = 0;

	for (int u = 0; u < strlen(instr); u++) {
		if (instr[u] == '\n')
			instr[u] = '\0';
	}

	for (int i = 0; i < strlen(instr); i++) {									//����������� ���������� �� ������ ����� � ������
		if (instr[i] == ' ' && flag == 1)										//�������� �� ��������� �����
			flag = 0;
		if (instr[i] != ' ' && flag == 0) {										//�������� ������ ������ �����
			index[word++] = &instr[i];
			flag = 1;
		}
	}

	srand(time(0));
	do {
		for (int i = 0; i < word; i++) {										//���������, ���� �� ���������� ��� �����
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
					mixChars(spase, rew_word);
					strcat(outstr, rew_word);									//���������� ����� � ��������� ������
					outstr[strlen(outstr)] = ' ';								//���������� ������� ����� ����� �����
					index[temp] = NULL;											//��������� ��������� �� �������������� �����
					break;
				}
			} while (index[temp] == NULL);
		}
		outstr[strlen(outstr)] = '\0';											//��������� ����� ��������� ������
	} while (!strcmp(instr, outstr));											//���������� �������� � ��������� ������, ���� ��� �� ����������
	return outstr;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int board[3][3];
	int j = 0, k = 0;
	int result = 3;
	for (j = 0; j < 3; j++) {
		for (k = 0; k < 3; k++) {
			printf("1����̣�2����������������֣�");
			scanf_s("%d", &board[j][k]);
		}
	}
	for (j = 0; j < 3 && result == 3; j++) {
		int gou1 = 0, cha1 = 0, gou2 = 0,cha2 = 0;
		for (k = 0; k < 3; k++) {
			if (board[j][k] == 1) {
				gou1++;
			}
			else {
				cha1++;
			}
			if (board[k][j] == 1) {
				gou2++;
			}
			else {
				cha2++;
			}
			if (gou1 == 3||gou2==3) {
				result = 1;
			}
			else if (cha1 == 3||cha2==3) {
				result = 2;
			}
		}
	}
	if (result == 3) {
		for (j = 0; j < 3 && result == 3;j++) {
			int gou1 = 0, cha1 = 0, gou2 = 0, cha2 = 0;
			for (k = 0; k < 3; k++) {
				if (board[j][k] == 1) {
					gou1++;
				}
				else {
					cha1++;
				}
				if (board[k][j] == 1) {
					gou2++;
				}
				else {
					cha2++;
				}
				if (gou1 == 3 || gou2 == 3) {
					result = 1;
				}
				else if (cha1 == 3 || cha2 == 3) {
					result = 2;
				}
			}
		}
	}
	if (result == 1) {
		printf("�̵�һ����ʤ");
	}
	else if (result == 2) {
		printf("����һ����ʤ");
	}
	else {
		printf("ƽ��");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int a = rand()%100;
	int x = 0;
	int n = 0;
	do {
		printf("������һ��0��100�����֣�");
		scanf_s("%d", &x);
		n++;
		if (x > a) {
			printf("����\n");
		}
		else if (x < a) {
			printf("С��\n");
		}
		else {
			printf("��ϲ�������\n");
		}
	} while (x != a);
	printf("������%d", n);
	return 0;
}
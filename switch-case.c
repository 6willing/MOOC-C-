#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int number = 0;
	printf("���������֣�");
	scanf_s("%d", &number);
	switch (number) {
	case 1:
		printf("���");
		break;
	case 2:
		printf("�Ҳ���\n");
	case 3:
		printf("�͹���");
		break;
	default:
		printf("�������");
		return 0;
	}
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int score = 0;
	printf("��������ĳɼ���");
	scanf_s("%d", &score);
	score /= 10;
	switch (score) {
	case 10:
	case 9:
		printf("��ĵȼ�ΪA");
		break;
	case 8:
		printf("��ĵȼ�ΪB");
		break;
	case 7:
		printf("��ĵȼ�ΪC");
		break;
	case 6:
		printf("��ĵȼ�ΪD");
		break;
	default:
		printf("��ĵȼ�ΪE\n������׼������");
		break;

	}
	return 0;
}
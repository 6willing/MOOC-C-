#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int score = 0;
	printf("��������ĳɼ���");
	scanf_s("%d", &score);
	if (score >= 90) {
		printf("��ĵȼ�ΪA");
	}
	else if (score >= 80 && score < 90) {
		printf("��ĵȼ�ΪB");
	}
	else if (score >= 70 && score < 80) {
		printf("��ĵȼ�ΪC");
	}
	else if (score >= 60 && score < 70) {
		printf("��ĵȼ�ΪD");
	}
	else {
		printf("��ĵȼ�ΪE\n������");

	}
	return 0;
}
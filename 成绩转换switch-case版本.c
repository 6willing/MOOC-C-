#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int score = 0;
	printf("请输入你的成绩：");
	scanf_s("%d", &score);
	score /= 10;
	switch (score) {
	case 10:
	case 9:
		printf("你的等级为A");
		break;
	case 8:
		printf("你的等级为B");
		break;
	case 7:
		printf("你的等级为C");
		break;
	case 6:
		printf("你的等级为D");
		break;
	default:
		printf("你的等级为E\n不及格准备补考");
		break;

	}
	return 0;
}
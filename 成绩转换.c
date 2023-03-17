#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int score = 0;
	printf("请输入你的成绩：");
	scanf_s("%d", &score);
	if (score >= 90) {
		printf("你的等级为A");
	}
	else if (score >= 80 && score < 90) {
		printf("你的等级为B");
	}
	else if (score >= 70 && score < 80) {
		printf("你的等级为C");
	}
	else if (score >= 60 && score < 70) {
		printf("你的等级为D");
	}
	else {
		printf("你的等级为E\n不及格");

	}
	return 0;
}
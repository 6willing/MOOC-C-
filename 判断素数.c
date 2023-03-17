#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int number = 0;
	int i = 0;
	int change = 1;
	printf("请输入一个数字：");
	scanf_s("%d", &number);
	for (i = 2; i < number; i++) {
		if (number % i == 0) {
			change = 0;
			break;
		}
	}
	if (change == 1) {
		printf("它是素数");
	}
	else {
		printf("它不是素数");
	}
	return 0;
}
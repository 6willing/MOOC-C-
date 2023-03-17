#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int number = 0;
	int g = 0;
	int ni = 0;
	printf("请输入数字：");
	scanf_s("%d", &number);
	while (number > 0) {
		g = number % 10;
		ni = ni * 10 + g;
		number /= 10;
	}
	printf("逆整数为%d", ni);
	return 0;
}
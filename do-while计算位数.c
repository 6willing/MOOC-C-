#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int number = 0;
	int n = 0;
	printf("请输入数字：");
	scanf_s("%d", &number);
	do {
		n++;
		number /= 10;
	} while (number > 0);
	printf("位数是：%d", n);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	const int NUMBER = 100;
	int price = 0;
	printf("请输入整数：");
	scanf_s("%d", &price);
	int change = NUMBER - price;
	printf("等于：%d", change);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	const int NUMBER = 100;
	int price = 0;
	printf("������������");
	scanf_s("%d", &price);
	int change = NUMBER - price;
	printf("���ڣ�%d", change);
	return 0;
}
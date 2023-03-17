#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int number = 0;
	int f = 1;
	double sum = 0;
	printf("ÇëÊäÈëÊı×Ö£º");
	scanf_s("%d", &number);
	for (f = 1; f <= number; f++) {
		sum += 1.0 / f;
	}
	printf("sum=%f", sum);
	return 0;
}
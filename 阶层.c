#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int number = 0, n = 1, f = 1;
	printf("ÇëÊäÈëÊı×Ö£º");
	scanf_s("%d", &number);
	for (n = 1; n <= number; n++) {
		f *= n;
	}
	printf("%d!=%d", number, f);
	return 0;
}
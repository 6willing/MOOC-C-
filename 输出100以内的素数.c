#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int number = 0;
	for (number = 2; number < 100; number++) {
		int i = 0;
		int change = 1;
		for (i = 2; i < number; i++) {
			if (number % i == 0) {
				change = 0;
				break;
			}
		}
		if (change == 1) {
			printf("%d ", number);
		}
	}
	printf("\n");
	return 0;
}
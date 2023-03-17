#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int number = 0;
	int i = 0;
	int n = 0;
	for (number = 2; n<50; number++) {
		int change = 1;
		for (i = 2; i < number; i++) {
			if (number % i == 0) {
				change = 0;
				break;
			}
		}
		if (change == 1) {
			printf("%d ", number);
			n++;
		}
	}
	return 0;
}
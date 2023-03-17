#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x = 0;
	int log2x = 0;
	printf("ÇëÊäÈëxµÄÊý£º");
	scanf_s("%d", &x);
	while (x > 1) {
		x /= 2;
		log2x++;
	}
	printf("log2x=%d", log2x);
	return 0;
}
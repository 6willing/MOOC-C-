#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x = 0;
	int fx = 0;
	printf("������x��");
	scanf_s("%d", &x);
	if (x > 0) {
		fx = 2 * x;
	}
	else if (x == 0) {
		fx = 0;
	}
	else {
		fx = -1;
	}
	printf("fx��ֵΪ%d", fx);
	return 0;

}
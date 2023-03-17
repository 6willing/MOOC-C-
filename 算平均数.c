#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x = 0;
	int n = 0;
	int sum = 0;
	do {
		printf("请输入数字：");
		scanf_s("%d", &x);
		if (x != -1) {
			sum += x;
			n++;
		}
	} while (x != -1);
	printf("它们的平均数为%d", sum / n);
	return 0;

}
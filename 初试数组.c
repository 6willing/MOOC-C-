#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x = 0;
	int cnt = 0;
	int number[100];
	int i = 0;
	double sum = 0;
	printf("请输入数字：");
	scanf_s("%d", &x);
	while (x != -1) {
		sum += x;
		number[cnt] = x;
		cnt++;
		printf("请输入数字：");
		scanf_s("%d", &x);
	}
	printf("平均数为%f\n", sum / cnt);
	for (i = 0; i <= cnt; i++) {
		if (number[i] > sum / cnt) {
			printf("%d ", number[i]);
		}
	}
	return 0;
}
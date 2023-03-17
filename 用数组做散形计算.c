#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x = 0;
	int cnt[10];
	int i = 0;
	int e = 0;
	for (i = 0; i < 10; i++) {
		cnt[i] = 0;
	}
	printf("请输入数字：");
	scanf_s("%d", &x);
	while (x != -1) {
		if (x >= 0 && x <= 9) {
			cnt[x]++;
		}
		printf("请输入数字：");
		scanf_s("%d", &x);
	}
	for (e = 0; e < 10; e++) {
		printf("%d出现的次数是%d\n", e, cnt[e]);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int compute(int x, int sz[], int number);
int main()
{
	int biao[100] = { 2 };
	int x = 0;
	int cnt = 3;
	int wei = 1;
	int end = -1;
	while (wei < 100) {
		if (compute(cnt, biao, wei) == 1) {
			biao[wei++] = cnt;
		}
		cnt++;
	}
	printf("���������֣�");
	scanf_s("%d", &x);
	end = search(x, biao, sizeof(biao) / sizeof(biao[0]));
	if (end == 1) {
		printf("����ǰ100��������������");
	}
	else {
		printf("����ǰ100�������в�������");
	}
	return 0;
}

int compute(int x, int sz[], int number)
{
	int i = 0;
	int ret = 1;
	for (i = 0; i < number; i++) {
		if (x % sz[i] == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
}

int search(int x, int biao[], int length)
{
	int i = 0;
	int result = -1;
	for (i = 0; i < length; i++) {
		if (biao[i] == x) {
			result = 1;
		}
	}
	return result;
}
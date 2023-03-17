#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void sum(int begin, int end) {
	int i = 0;
	int sum = 0;
	for (i = begin; i <= end; i++) {
		sum += i;
	}
	printf("和为：%d", sum);
}
int main()
{
	int begin = 0;
	int end = 0;
	printf("请输入起始数字：");
	scanf_s("%d", &begin);
	printf("请输入最后数字：");
	scanf_s("%d", &end);
	sum(begin, end);
	return 0;
}
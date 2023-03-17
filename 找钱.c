#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//scanf是scanf_s的前身，
	int price = 0;
	int total = 0;
	printf("请输入您购买东西的价格：");
	scanf("%d", &price);
	printf("请输入您的票面：");
	scanf("%d", &total);
	if (total < price) {
		printf("不好意思，您的钱不够。");
	}
	else {
		printf("找回您%d元", total - price);
	}
	return 0;
}
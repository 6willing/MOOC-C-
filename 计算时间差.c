#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int hour1 = 0, minute1 = 0;
	int hour2 = 0, minute2 = 0;
	int a = 0, b = 0, c = 0;
	printf("请输入时间1：");
	scanf_s("%d:%d",&hour1,&minute1);
	printf("请输入时间2：");
	scanf_s("%d:%d",&hour2,&minute2);
	a = hour1 * 60 + minute1;
	b = hour2 * 60 + minute2;
	if (b < a) {
		c = a - b;
	}
	else {
		c = b - a;
	}
	printf("时间差为%d时%d分", c / 60, c % 60);
	return 0;
}
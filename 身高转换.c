#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double chi = 0;
	double chun = 0;
	printf("请输入几尺几寸：");
	scanf_s("%lf %lf", &chi, &chun);
	double sg = (chi + chun / 12) * 0.3048;
	printf("你的身高为%f", sg);
	return 0;
}
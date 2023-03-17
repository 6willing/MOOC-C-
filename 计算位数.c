#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//初始化
	int number = 0;
	int n = 0;
	//输入界面
	printf("请输入数字：");
	scanf_s("%d", &number);
	//计算位数
	if (number > 0) {
		while (number > 0) {
			number /= 10;
			n++;
		}
	}
	else {
		n = 1;
	}
	//输出界面
	printf("这个数的位数为：%d", n);
	return 0;
}
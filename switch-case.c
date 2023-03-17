#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int number = 0;
	printf("请输入数字：");
	scanf_s("%d", &number);
	switch (number) {
	case 1:
		printf("你好");
		break;
	case 2:
		printf("我不好\n");
	case 3:
		printf("就怪了");
		break;
	default:
		printf("程序结束");
		return 0;
	}
}
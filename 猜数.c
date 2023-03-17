#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int a = rand()%100;
	int x = 0;
	int n = 0;
	do {
		printf("请输入一个0到100的数字：");
		scanf_s("%d", &x);
		n++;
		if (x > a) {
			printf("大了\n");
		}
		else if (x < a) {
			printf("小了\n");
		}
		else {
			printf("恭喜你猜中了\n");
		}
	} while (x != a);
	printf("次数是%d", n);
	return 0;
}
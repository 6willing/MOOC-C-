#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int search(int number, int a[], int length);
int main()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	int x = 0;
	int loc = 0;
	printf("请输入数字：");
	scanf_s("%d", &x);
	loc = search(x, a, sizeof(a) / sizeof(a[0]));
	if (loc != -1) {
		printf("%d数字在第%d的位置", x, loc);
	}
	else {
		printf("数组中没有这个数字");
	}
	return 0;
}

int search(int number, int a[], int length)
{
	int i = 0;
	int ret = -1;
	for (i = 0; i < length; i++) {
		if (a[i] == number) {
			ret = i;
			break;
		}
	}
	return ret;
}











//int a[] = { 2,3,4,5,6,7 };
//int i = 0;
//for (i = 0; i < 6; i++) {
//	printf("%d\t", a[i]);
//}
//int a[] = { [2] = 3,4,[5] = 6 };
//int i = 0;
//for (i = 0; i < 6; i++) {
//	printf("%d\t", a[i]);
//}
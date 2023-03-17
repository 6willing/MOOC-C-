#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x = 0;
	printf("«Î ‰»Î ˝◊÷£∫");
	scanf_s("%d", &x);
	char* a[] = {
		"1yue",
		"2yue",
		"3yue",
		"4yue",
		"5yue",
		"6yue",
		"7yue",
		"8yue",
		"9yue",
		"10yue",
		"11yue",
		"12yue"
	};
	printf("%s", a[x-1]);
	return 0;
}
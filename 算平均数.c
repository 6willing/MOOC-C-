#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x = 0;
	int n = 0;
	int sum = 0;
	do {
		printf("���������֣�");
		scanf_s("%d", &x);
		if (x != -1) {
			sum += x;
			n++;
		}
	} while (x != -1);
	printf("���ǵ�ƽ����Ϊ%d", sum / n);
	return 0;

}
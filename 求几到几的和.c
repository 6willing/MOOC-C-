#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void sum(int begin, int end) {
	int i = 0;
	int sum = 0;
	for (i = begin; i <= end; i++) {
		sum += i;
	}
	printf("��Ϊ��%d", sum);
}
int main()
{
	int begin = 0;
	int end = 0;
	printf("��������ʼ���֣�");
	scanf_s("%d", &begin);
	printf("������������֣�");
	scanf_s("%d", &end);
	sum(begin, end);
	return 0;
}
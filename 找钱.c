#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//scanf��scanf_s��ǰ��
	int price = 0;
	int total = 0;
	printf("���������������ļ۸�");
	scanf("%d", &price);
	printf("����������Ʊ�棺");
	scanf("%d", &total);
	if (total < price) {
		printf("������˼������Ǯ������");
	}
	else {
		printf("�һ���%dԪ", total - price);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//��ʼ��
	int number = 0;
	int n = 0;
	//�������
	printf("���������֣�");
	scanf_s("%d", &number);
	//����λ��
	if (number > 0) {
		while (number > 0) {
			number /= 10;
			n++;
		}
	}
	else {
		n = 1;
	}
	//�������
	printf("�������λ��Ϊ��%d", n);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double foot = 0;
	double inch = 0;
	printf("�����뼸�߼��磺");
	scanf_s("%lf %lf", &foot, &inch);
	printf("���Ϊ%f", (foot + inch / 12) * 0.3048);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 6;
	int b = 7;
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("Яждкa=%d,b=%d", a, b);
	return 0;
}
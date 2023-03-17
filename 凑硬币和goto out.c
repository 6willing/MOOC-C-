#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int one = 0;
	int two = 0;
	int five = 0;
	int yuan = 0;
	printf("请输入多少元：");
	scanf_s("%d", &yuan);
	for (one = 0; one <= yuan*10; one++) {
		for (two = 0; two <= yuan*10/2;two++) {
			for (five = 0; five <= yuan*10/5; five++) {
				if (yuan*10 == one + two * 2 + five * 5) {
					printf("%d元需要%d个1角，%d个2角，%d个5角\n",yuan,one,two,five);
					goto out;
				}
			}
		}
	}
out:
	return 0;
}
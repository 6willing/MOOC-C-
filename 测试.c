#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;
	switch (i % 3)
		/*很简单，1除以3的商是0，余数自然是1。那么2除以3的商也是0，余数是2
          也就是说，一个数除以另一个数，要是比另一个数小的话，余数就是它自己。
		*/
	{
	case 0: printf("zero");
	case 1: printf("one");
	case 2: printf("two");
	}
	return 0;
}
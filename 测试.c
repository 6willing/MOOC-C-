#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;
	switch (i % 3)
		/*�ܼ򵥣�1����3������0��������Ȼ��1����ô2����3����Ҳ��0��������2
          Ҳ����˵��һ����������һ������Ҫ�Ǳ���һ����С�Ļ��������������Լ���
		*/
	{
	case 0: printf("zero");
	case 1: printf("one");
	case 2: printf("two");
	}
	return 0;
}
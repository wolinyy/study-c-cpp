#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//%d,有一定的范围	    INT_MIN-INTMAX
//%u也有一定的范围		  0  UINTMAX
void 整数范围()
{
	printf("%d,%d\n",INT_MAX,INT_MIN);
	printf("%d,%d\n", INT_MAX+1, INT_MIN-1);

	printf("%u\n", -10);
	printf("%u,%u\n", UINT_MAX,0);
}

void 数据溢出()
{
	unsigned short x = 65535+1;
	unsigned int xx = 4294967295+2;

	printf("刘雪平有%d元\n", x);
	printf("size=%d\n", sizeof(unsigned short));

	printf("刘雪平有%u元\n", xx);	// %u无符号  %d有符号
}

void main()
{
	整数范围();
	数据溢出();

	getchar();
}
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//%d,��һ���ķ�Χ	    INT_MIN-INTMAX
//%uҲ��һ���ķ�Χ		  0  UINTMAX
void ������Χ()
{
	printf("%d,%d\n",INT_MAX,INT_MIN);
	printf("%d,%d\n", INT_MAX+1, INT_MIN-1);

	printf("%u\n", -10);
	printf("%u,%u\n", UINT_MAX,0);
}

void �������()
{
	unsigned short x = 65535+1;
	unsigned int xx = 4294967295+2;

	printf("��ѩƽ��%dԪ\n", x);
	printf("size=%d\n", sizeof(unsigned short));

	printf("��ѩƽ��%uԪ\n", xx);	// %u�޷���  %d�з���
}

void main()
{
	������Χ();
	�������();

	getchar();
}
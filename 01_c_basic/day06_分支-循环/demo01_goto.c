#include<stdio.h>
#include<stdlib.h>

void demo01()
{
	int A = 0;

CCC:  
	if (A < 100)
	{
		printf("go%d\n", A+1);
		A++;
		goto CCC;
	}
}

void demo02()
{
	goto  AAA;
AAA:	
	printf("hello\n");
BBB:	
	printf("world\n");
}

void main()
{
	demo01();
	demo02();

	system("pause");
}
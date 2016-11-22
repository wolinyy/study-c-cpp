#include<stdio.h>
#include<stdlib.h>

void demo01()
{
	int a, b, c;
	a = 1, b= 2, c = 3;

	if(a < b)
		if(b < c)
			printf("b < c\n");
		else
			printf("b > c\n");
}

void demo02()
{
	int a, b, c;
	a = 1, b= 2, c = 3;

	if(a > b)
	{
		printf("a > b\n");
	}
	else if(b > c)
	{
		printf("b > c\n");
	}
	else
	{
		if(a > c)
		{
			printf("a > c\n");
		}
		else
		{
			printf("a < c\n");
		}
	}
}

void main()
{
	demo01();
	demo02();

	system("pause");
}
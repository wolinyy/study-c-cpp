#include<stdio.h>
#include<stdlib.h>

void test_continue()
{
	int i = 100;
	for (; i <= 500; i++)
	{
		if (i % 53 != 0)
		{
			continue;  //筛选
		}
		printf("\n%d%%53==0", i);
	}
}

void test_break()
{
	int i = 100;
	for (; i <= 500; i++)
	{
		printf("\n%d", i);
		if (i % 53 == 0)
		{
			printf("  %d%%53==0", i);
			break;//找出一个就立马跳出
		}
	}
}

void main()
{
	test_continue();
	test_break();

	getchar();
}
#include<stdio.h>
#include<stdlib.h>

void test_continue()
{
	int i = 100;
	for (; i <= 500; i++)
	{
		if (i % 53 != 0)
		{
			continue;  //ɸѡ
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
			break;//�ҳ�һ������������
		}
	}
}

void main()
{
	test_continue();
	test_break();

	getchar();
}
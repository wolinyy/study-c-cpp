#include<stdio.h>
#include<stdlib.h>

void demo01()
{
	int i;
	int *p, *p1;

	p = (int *)calloc(sizeof(int), 50);//��̬����

	for (i = 0; i < 50; i++)
	{
		printf("\n%d", p[i] = i + 1);
	}

	//realloc����ͷŵ��ڴ濽�����µ�ַ��
	p1 = realloc(p, 300);

	for (i = 0; i < 75; i++)
	{
		printf("\n%d", p1[i] = i + 1);
	}

	free(p1);
}

void demo02()
{
	int num = 10;
	int i;
	int *p = malloc(num * 4);
	printf("%x", p);//��ӡ�ڴ��ַ

	for (i = 0; i < num; i++)
	{
		printf("\n%d", p[i] = i + 1);
	}

	free(p);
}

void main()
{
	demo01();
	demo02();

	system("pause");
}
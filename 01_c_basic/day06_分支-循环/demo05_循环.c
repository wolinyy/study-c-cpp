#include<stdio.h>
#include<stdlib.h>

void doWhile()
{
	int i = 0; 
	do
	{
		printf("i = %d\n", i);
		i++;
	}while(i < 10);
}

void While()
{
	int i = 0; 
	while(i < 10)
	{
		printf("i = %d\n", i);
		i++;
	}
}

void For()
{
	char ch = 'A';
	for (; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch + 'a' - 'A');
	}
	putchar('\n');
}

void main()
{
	doWhile();
	While();
	For();

	system("pause");
}
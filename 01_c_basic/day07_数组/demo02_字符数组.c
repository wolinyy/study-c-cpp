#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void demo01()
{
	//没有结束符'\0'
	char test[4] = {'a', 's', 'd', 'f'};

	int i = 0;
	while(test[i] != '\0')
	{
		putchar(test[i]);
		i++;
	}
	putchar('\n');
}

void demo02()
{
	char test[5] = {'a', ' ', 'd', 'f', '\0'};

	//输入一个字符串 会溢出
	scanf("%s", &test);

	printf("%s", &test);
	putchar('\n');
	getchar();
}

void demo03()
{
	char names[12][4] = {"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "otc", "nov", "dec"};
	char month[20];
	int i;

	gets(month);

	for (i = 0; i < 12; i++)
	{
		int j = strcmp(month, names[i]);
		if(j == 0)
		{
			printf("第%d\n", i+1);
			return ;
		}
	}

	printf("没有这个月份\n");
}

void main()
{
	demo01();
	demo02();
	demo03();

	system("pause");
}
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%3d,%-3d", i, j); //3d宽度为3，-左边对齐

		}
		putchar('\n');//插入换行符
	}

	system("pause");
}

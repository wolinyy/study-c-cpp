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
			printf("%3d,%-3d", i, j); //3d���Ϊ3��-��߶���

		}
		putchar('\n');//���뻻�з�
	}

	system("pause");
}

#include<stdio.h>

void demo01()
{
	int i,j,a[2][3] = {1,2,3,4,5,6},b[2][3];
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%2d", b[i][j]);
		}
		printf("\n");
	}
	//有没有这句结果不一样，说明编译器进行了优化
	//printf("&a=%p, &b=%p\n", a, b);
}

void demo02()
{
	int s[][5] = 
	{
		1,1, 1,1, 2, 1,1, 3, 3, 1,1, 4, 6, 4,1
	};
	int i, j;

	printf("sizeof(s)=%d\n", sizeof(s));
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			s[i][j] = 1;
			printf("%2d", s[i][j]);
		}
		printf("\n");
	}
	printf("sizeof(s)=%d\n", sizeof(s));
}

void demo03()
{
#define M 13

	int s[M][M] = {1};
	int k, i, j;
	for(k = 0; k < (M-1)*2; k++)
	{
		printf(" ");
	}
	printf("%4d\n", 1);
	for (i = 1; i < M; i++)
	{
		//在输出每一行的时候输出空格
		//输出空格的个数
		for (k = 0; k < (M-i-1)*2; k++)
		{
			printf(" ");
		}
		for (j = 0; j < i+1; j++)
		{
			if(j == 0)
			{
				s[i][j] = 1;
			}
			else
			{
				s[i][j] = s[i-1][j] + s[i-1][j-1];
			}
			printf("%4d", s[i][j]);
		}
		printf("\n");
	}
}

void demo04()
{
#define N 15
	int a[N] = {33, 44, 53,26,17,89,65,42,27, 20, 34, 53, 63, 67, 25};//排序，从小到大
	int i, j;
	for (i = 0; i < N-1; i++)
	{
		for (j = i+1; j < N; j++)
		{
			if(a[i] > a[j])
			{
				//交换两个元素的位置
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i = 0; i < N; i++)
	{
		printf("%3d", a[i]);
	}
}

void main()
{
	demo01();
	demo02();
	demo03();
	demo04();

	system("pause");
}
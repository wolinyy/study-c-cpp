#include<stdio.h>
#include<stdlib.h>

void demo01()
{
	int  b[4][5] ;
	int (*p)[5] = b; //数组指针，内存占4字节
	int x = 2, y = 3, i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{

			printf("%5d，%7x", b[i][j]=i*5+j,&b[i][j]);
		}
		printf("\n");
	}
	printf("size b=%d,p=%d", sizeof(b), sizeof(p));
	printf("\nsize b+1= %d,*(b+1)=%d", sizeof(b + 1), sizeof(*(b + 1)));//行指针
	printf("\nsize p+1= %d,*(p+1)=%d", sizeof(p + 1), sizeof(*(p + 1)));
	printf("\nb=%x,b+1=%x,b+2=%x,b+3=%x", b, b + 1, b + 2, b + 3);

	printf("\n*b=%x,sizeof*b=%d", *b,sizeof(**b));
	printf("\n*b+1=%x,sizeof*b+1=%d", *b+1, sizeof(*(*b+1)));

	printf("\n&b=%x,sizee&b=%d", &b,sizeof(*(&b)));
	printf("\nb=%x,sizeb=%d", b,sizeof(*b)); //地址相同，指针的意义不一定相同，地址，还有类型，类型决定了大小

	printf("\n%d,%d,%d", b[x][y], *(*(b + x) + y),*(b[x]+y));
}

void demo02()
{
	int i, j;
	//一个一维数组，3个元素，每个元素是一个有两个元素的数组
	int a[3][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
	//int a[3][2] = { { 1, 2, 3 }, { 4, 5, 6 };
	printf("%x\n", a);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("  %d", a[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	demo01();
	demo02();

	getchar();
}
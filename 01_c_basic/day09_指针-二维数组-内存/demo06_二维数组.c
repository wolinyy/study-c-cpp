#include<stdio.h>
#include<stdlib.h>

void demo01()
{
	int  b[4][5] ;
	int (*p)[5] = b; //����ָ�룬�ڴ�ռ4�ֽ�
	int x = 2, y = 3, i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{

			printf("%5d��%7x", b[i][j]=i*5+j,&b[i][j]);
		}
		printf("\n");
	}
	printf("size b=%d,p=%d", sizeof(b), sizeof(p));
	printf("\nsize b+1= %d,*(b+1)=%d", sizeof(b + 1), sizeof(*(b + 1)));//��ָ��
	printf("\nsize p+1= %d,*(p+1)=%d", sizeof(p + 1), sizeof(*(p + 1)));
	printf("\nb=%x,b+1=%x,b+2=%x,b+3=%x", b, b + 1, b + 2, b + 3);

	printf("\n*b=%x,sizeof*b=%d", *b,sizeof(**b));
	printf("\n*b+1=%x,sizeof*b+1=%d", *b+1, sizeof(*(*b+1)));

	printf("\n&b=%x,sizee&b=%d", &b,sizeof(*(&b)));
	printf("\nb=%x,sizeb=%d", b,sizeof(*b)); //��ַ��ͬ��ָ������岻һ����ͬ����ַ���������ͣ����;����˴�С

	printf("\n%d,%d,%d", b[x][y], *(*(b + x) + y),*(b[x]+y));
}

void demo02()
{
	int i, j;
	//һ��һά���飬3��Ԫ�أ�ÿ��Ԫ����һ��������Ԫ�ص�����
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
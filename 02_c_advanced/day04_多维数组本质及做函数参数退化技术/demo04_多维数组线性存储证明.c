#include "stdio.h"
#include "string.h"
#include "stdlib.h"

//֤��һ�¶�ά��������Դ洢
//���Դ�ӡ

//��ά����������������һ������£�ֻ�ܱ�ﵽ��ά��
//�������ά�ڴ棨���ǳ���Ա������֣����Ѿ�û�����塣

//һ�������1��ָ�����1ά������ָ������ά������
//����г���char ***����3�����ϵ�ָ�룬�򲻴���ά���ڴ档����

void printfAARRR(char ***ddd);
void printfAARRR(char *********dddd);

void printfArray411(int *array, int num)
{
	int i = 0;
	for (i=0; i<num ; i++)
	{
		printf("%d ", array[i]);
	}
}

void printfArray412(int (*array)[5], int num)
{
	return ;
}

void printfArrr333(int c[3][4][5])
{
	return ;
}
void main()
{
	int a[3][5];
	int c[3][4][5];
	int i , j = 0;
	int tmp = 0;
	for (i=0; i<3; i++)
	{
		for (j=0; j<5; j++)
		{
			a[i][j] = tmp ++;
		}
	}


	printfArray411((int *)a, 15);

	system("pause");
}
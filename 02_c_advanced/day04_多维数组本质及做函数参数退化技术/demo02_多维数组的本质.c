#include "stdlib.h"
#include "string.h"
#include "stdio.h"

//֤����ά����Ĵ洢�������Ե�e����������
void printArray(char aa[][5]);
void printArray2(int *p);

void main()
{
	int a[3][5];

	int c[5]; //&c + 1;

	int b[10]; //b����������Ԫ�صĵ�ַ &b�����������ĵ�ַ &b+1�൱�� ָ�����4*10����λ
	//ָ�벽��===������1
	
	//a����ʲôʲô�ǣ�a��һ������ָ�� ָ���ά�����ָ��
	//a +1;
	printf("a:%d, a+1:%d \n", a, a+1); //4*5

	{
		int i=0, j = 0, tmp = 0;
		for (i=0; i<3; i++)
		{
			for (j=0; j<5; j++)
			{
				a[i][j] = ++tmp;
			}
		}

		printf("\n");
		for (i=0; i<3; i++)
		{
			for (j=0; j<5; j++)
			{
				printf("%d \n", a[i][j]);
			}
		}
	}

	//a�ı�����һ������ָ�롣������ÿ��������һά��ά��������������
	{
		int i = 0, j = 0;
		//������һ������ָ�� ����
		int (*myArrayPoint)[5] ; //���߱�����ҿ����ĸ��ֽ��ڴ�
		myArrayPoint  =  a;
		printf("\n");
		for (i=0; i<3; i++)
		{
			for (j=0; j<5; j++)
			{
				//myArrayPoint[i][j] = ++tmp;
				printf("%d \n", myArrayPoint[i][j]);
			}
		}
	}

	/*
	char array[10][30];
	(array+i) //�൱�� ��i�е��׵�ַ //����ָ��

	��*(array+i)��//һά������׵�ַ

	��*(array+i)��+j //�൱�ڵ�i�е�j�еĵ�ַ�˰ѡ�������

	*(��*(array+i)��+j) //�൱�ڵ�i�е�j�еĵ�ַ�˰ѡ�������<====>array[i][j]
	*/

	system("pause");
}
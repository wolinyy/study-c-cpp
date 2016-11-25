#include "stdlib.h"
#include "string.h"
#include "stdio.h"

/*
int a[10]  ---->int a[] ---->int *a
�����������βε�ʱ��������β��ж���int a[10]��䣬
c/c++������ �����Ż���������������
int a[10]  ---->int a[] ---->int *a
�ܽ᣺�������õ�ʱ�򣬰������׵�ַ����Ч���ݳ��ȴ��������ú�����������ȷ������
*/

//�����鵱�����������Ļ���ʱ����˻�Ϊָ�� 
int printfArray01(int a[10], int num)
{
	int i = 0;
	for (i=0; i<num; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n ");
	return 0;
}

int printfArray02(int a[], int num)
{
	int i = 0;
	for (i=0; i<num; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n ");
	return 0;
}

int printfArray03(int *a, int num)
{
	int i = 0;
	for (i=0; i<num; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n ");
	return 0;
}

int sortArray(int a[])
{
	int i = 0, j = 0;
	int tmp;
	for (i=0; i<10; i++) //���ѭ��
	{
		for (j=i+1; j<10; j++) //�ڲ�ѭ��
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	return 0;
}

void main()
{
	//�������� ��ӡ���� ��������
	int num2;
	int a[10] = {1,3,4,5,65,76,7,34,4,32};

	num2 = sizeof(a)/sizeof(*a);
	printf("num2:%d \n", num2);
	printf("����֮ǰ\n ");

	printfArray01(a, num2);
	printfArray02(a, num2);
	printfArray03(a, num2);

	sortArray(a);
	
	printf("����֮��\n ");
	printfArray01(a, num2);
	printfArray02(a, num2);
	printfArray03(a, num2);

	system("pause");
}
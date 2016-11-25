#include "stdlib.h"
#include "stdio.h"
#include "string.h"

typedef struct Te1
{
	char *p1;
	char *p2;

	char *p3;
	char *p13;
	char *p4;
};

//�ṹ��Ķ���
typedef struct _Teacher
{
	char name[64]; 
	char *tile;
	//char *p1;
	//char **p2;
	int age;
}Teacher ;


int printTArray(Teacher *tArray, int num)
{
	int i = 0;
	for (i=0; i<num; i++)
	{
		printf("%d %s %s \n", tArray[i].age, tArray[i].name, tArray[i].tile);
	}
	return 0;
}
//
int sortTArray(Teacher *tArray, int num)
{
	int i , j = 0; 
	Teacher tmp;
	for (i=0; i<num; i++)
	{
		for (j=i+1; j<num; j++)
		{
			if (tArray[i].age > tArray[j].age)
			{
				tmp = tArray[i]; //�������������ṩ����Ϊ
				tArray[i] = tArray[j];
				tArray[j] = tmp;
			}
		}
	}
	return 0;
}

Teacher *creatTArray2(int num)
{
	int i = 0;
	Teacher *tArray = NULL;
	tArray = (Teacher *)malloc(num * sizeof(Teacher));
	if (tArray == NULL)
	{
		return NULL;
	}
	for (i=0; i<num; i++)
	{
		tArray[i].tile = (char *)malloc(100);
	}
	return tArray;
}

void freeTArray(Teacher **pT, int num)
{
	Teacher *tArray = *pT;
	int i;
	if(NULL == pT)
	{
		return;
	}
	if(NULL == tArray)
	{
		return;
	}

	for (i=0; i<num; i++)
	{
		if(NULL != tArray[i].tile)
		{
			free(tArray[i].tile);
		}
	}
	if(NULL != tArray)
	{
		free(tArray);
	}
}

void main()
{
	//����һ���ṹ�����飬���ṹ������Ԫ�ظ�ֵ�����ṹ�����򡣡�������ӡ
	int i = 0;
	int ret = 0;
	Teacher *pArray = NULL;

	pArray = creatTArray2(3);
	if (pArray == NULL)
	{
		return ;
	}

	for (i=0; i<3; i++)
	{
		printf("������%d����ʦ�����䣺", i+1);
		scanf("%d", &pArray[i].age);
		printf("������%d����ʦ��������", i+1);
		scanf("%s", pArray[i].name);

		printf("������%d����ʦ��ְ�ƣ�", i+1);
		scanf("%s", pArray[i].tile);
	}

	printf("����֮ǰ��������\n");
	printTArray(pArray, 3);
	sortTArray(pArray, 3);
	printf("����֮�󡣡�����\n");
	printTArray(pArray, 3);

	freeTArray(&pArray, 3);
	system("pause");
}

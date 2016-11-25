#include "stdlib.h"
#include "stdio.h"
#include "string.h"

//�ṹ��Ķ���
typedef struct _AdvTeacher
{
	char name[64]; 
	char *tile;
	char **pStuArray;
	//char *p1;
	//char **p2;
	int age;
}Teacher ;

int printTArray(Teacher *tArray, int num)
{
	int i = 0, j = 0;
	for (i=0; i<num; i++)
	{
		printf("\n��ʦ��ϢΪ:");
		printf("%d %s %s \n", tArray[i].age, tArray[i].name, tArray[i].tile);
		printf("\nѧ����ϢΪ:");
		for (j=0; j<3; j++)
		{
			printf("%s ", tArray[i].pStuArray[j]);
		}
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
	int i = 0, j = 0;
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

	//������ʦ����ѧ��
	for (i=0; i<num; i++)
	{
		char **ptmp = (char **)malloc((3+1)*sizeof(char *));
		for (j=0; j<3; j++)
		{
			ptmp[j] = (char *)malloc(120);
		}
		//ptmp[3] = NULL;
		tArray[i].pStuArray = ptmp;
	}

	return tArray;
}

void main()
{
	//����һ���ṹ�����飬���ṹ������Ԫ�ظ�ֵ�����ṹ�����򡣡�������ӡ
	int i = 0, j = 0;
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

		printf("�����ѧ����Ϣ\n");
		for (j=0; j<3; j++)
		{
			printf("������%d��ѧ��������: ", j+1);
			scanf("%s", pArray[i].pStuArray[j]);
		}
	}

	printf("����֮ǰ��������\n");
	printTArray(pArray, 3);
	sortTArray(pArray, 3);
	printf("����֮�󡣡�����\n");
	printTArray(pArray, 3);

	system("pause");
}

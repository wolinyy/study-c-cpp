//demo03_��ά���������������˻���������.c


#include "stdio.h"
#include "string.h"
#include "stdlib.h"


//int a[10] ===int a[] int *a
//char buf[10][30] ===>
int printfArray(char buf[10][30]);  //3k
int printfArray(char buf[][30]); //4k
int printfArray(int (*buf)[30]); //5k

//int spitString02( char *buf1, char c, char buf[10][30], int *num)
//int spitString02( char *buf1, char c, char buf[][30], int *num)
int spitString02( char *buf1, char c, char (*buf)[30], int *num)
{
	int ret = 0;
	char *p = NULL;
	char *pTmp = NULL;
	int ncount = 0;
	if (buf1==NULL ||  num==NULL)
	{
		return -1;
	}
	//����1 ��ʼ������ pTmp,p��ִ�м����Ŀ�ͷ
	p = buf1;
	pTmp = buf1;
	do
	{
		//����2 strstr strchr������p���� 	��p��pTmp֮����һ����ֵ
		p = strchr(p, c);
		if (p == NULL) //û���ҵ���������
		{
			break;
		}
		else
		{

			//���ַ���
			strncpy(buf[ncount], pTmp, p-pTmp);
			buf[ncount][p-pTmp] = '\0';

			ncount++;

			//����3 ��p��pTmp���³�ʼ�����ﵽ����������
			pTmp = p  = p + 1;
		}

	} while (*p != '\0');
	//printf("ncout:%d\n", ncount);
	*num = ncount;
	return ret;
}

void main()
{
	int ret = 0, i = 0;
	char *buf1 = "abcdef,acccd,";
	char c = ',';
	char buf[10][30];
	int num = 0;
	ret =  spitString02(buf1, c, buf, &num);
	if (ret != 0)
	{
		printf("func spitString() err:%d\n", ret);
		return ;
	}

	for (i=0; i<num; i++)
	{
		printf("%s\n", buf[i]);
	}

	system("pause");
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Node
{
	int data;
	struct Node *next;
}SLIST;

//��д����SList_Creat����������ͷ���ĵ�������ѭ��������㣬
//����������е���ֵ�Ӽ������룬��-1��Ϊ���������־�������ͷ����ַ�ɺ���ֵ���ء�

SLIST *SList_Creat();
int SList_Creat2(SLIST **mypHead);
int SList_Print(SLIST *pHead);
int SList_Destory(SLIST *pHead);
int SList_NodeInsert(SLIST *pHead, int x, int y);
int SList_NodeDel(SLIST *pHead, int x);
int SList_Resve(SLIST *pHead);
int SList_Resve2(SLIST *pHead);

//��д���Ƚ��ġ���������Ĺ�������  1�깤��������
SLIST *SList_Creat()
{
	SLIST *pHead = NULL, *pM = NULL, *pCur = NULL;
	int data;

	//1.����ͷ��㲢��ʼ��,ͷ������ݱ��泤��
	pHead = (SLIST *)malloc(sizeof(SLIST));
	if(NULL == pHead)
	{
		return NULL;
	}
	pHead->data = 0;
	pHead->next = NULL;

	//2.��ǰ��㸳ֵ
	pCur = pHead;

	do 
	{
		//��������
		printf("\nplease insert the data of node(-1:quit): ");
		scanf("%d", &data);
		if(-1 == data)
		{
			break;
		}

		//���ҵ����
		pM = (SLIST *)malloc(sizeof(SLIST));
		if(NULL == pM)
		{
			//ɾ�������õ�����
			SList_Destory(pHead);
			return NULL;
		}

		pM->data = data;
		pM->next = NULL;

		//ǰ������
		pCur->next = pM;
		pCur = pM;

		//����
		pHead->data++;
	} while (1);

	return pHead;
}

int SList_Creat2(SLIST **mypHead)
{
	SLIST *pHead = NULL, *pM = NULL, *pCur = NULL;
	int data;
	int ret = 0;

	//1.����ͷ��㲢��ʼ��,ͷ������ݱ��泤��
	pHead = (SLIST *)malloc(sizeof(SLIST));
	if(NULL == pHead)
	{
		ret = -1;
		printf("func SList_Creat2() err:%d ", ret);
		return ret;
	}
	pHead->data = 0;
	pHead->next = NULL;

	//2.��ǰ��㸳ֵ
	pCur = pHead;

	do 
	{
		//��������
		printf("\nplease insert the data of node(-1:quit): ");
		scanf("%d", &data);
		if(-1 == data)
		{
			break;
		}

		//���ҵ����
		pM = (SLIST *)malloc(sizeof(SLIST));
		if(NULL == pM)
		{
			//ɾ�������õ�����
			SList_Destory(pHead);
			
			ret = -2;
			printf("func SList_Creat2() err:%d ", ret);
			return ret;
		}

		pM->data = data;
		pM->next = NULL;

		//ǰ������
		pCur->next = pM;
		pCur = pM;

		//����
		pHead->data++;
	} while (1);

	*mypHead = pHead;
	return ret;
}

int SList_Print(SLIST *pHead)
{
	SLIST *p = NULL;

	if (pHead == NULL)
	{
		return -1;
	}

	p = pHead->next;
	printf("\nBegin ");
	while(p)
	{
		printf("%d ", p->data);
		p  = p->next;
	}
	printf(" End");
	return 0;
}

int SList_Destory(SLIST *pHead)
{
	SLIST *p = NULL, *tmp = NULL;
	if (pHead == NULL)
	{
		return -1;
	}
	p = pHead;
	while(p)
	{
		//������һ�����λ��
		tmp = p->next;
		free(p);//ɾ����ǰ�ڵ�
		p = tmp; //�ڵ�ָ�����
	}
	return 0;
}

//���ܣ���ֵΪx�Ľ��ǰ������ֵΪy�Ľ�㣻��ֵΪx�Ľ�㲻���ڣ�����ڱ�β��
int SList_NodeInsert(SLIST *pHead, int x, int y)
{
	SLIST *pCur = NULL, *pPre = NULL, *pM = NULL;

	//����y��ֵmalloc�½��
	pM = (SLIST *)malloc(sizeof(SLIST));
	if (pM == NULL)
	{
		return -1;
	}
	pM->data = y;
	pM->next = NULL;

	//׼��pCur Pre����
	pPre = pHead;
	pCur = pHead->next;

	while (pCur)
	{
		if (pCur->data == x)
		{
			//�������
			break;
		}

		pPre = pCur; //��ǰ��������
		pCur = pCur->next; //�õ�ǰ������
	}

	//1 pM������Ӻ������
	//pM->next = pCur;
	pM->next = pPre->next;
	//2 ��ǰ���������pM 
	pPre->next = pM; 

	return 0;
}

int SList_NodeDel(SLIST *pHead, int x)
{
	SLIST *pCur = NULL, *pPre = NULL;

	//׼��pCur Pre����
	pPre = pHead;
	pCur = pHead->next;

	while (pCur)
	{
		if (pCur->data == x)
		{
			//�������
			break;
		}

		pPre = pCur; //��ǰ��������
		pCur = pCur->next; //�õ�ǰ������
	}

	if (pCur == NULL)
	{
		printf("û���ҵ�Ҫɾ���Ľ��\n");
		return -1;
	}
	//��������ɾ�����
	pPre->next =   pCur->next;
	//�ͷ��ڴ�
	free(pCur);
	return 0;
}

/*

	pHead p q t

*/
int SList_Resve(SLIST *pHead)
{
	SLIST *t = NULL, *p = NULL, *q = NULL;

	if (pHead == NULL)
	{
		return -1;
	}
	if (pHead->next == NULL || pHead->next->next == NULL)
	{
		return -2;
	}

	//��ʼ�����û���
	p = pHead->next;
	q = pHead->next->next;

	while (q != NULL)
	{
		//����֮ǰ��q�ĺ�̽�㱣��
		t = q->next;
		//���ò���
		q->next = p;

		//3��ǰ���ڵ����  //3 4�Ǵ�����һ��whileѭ�����õĻ���
		p = q;

		//4�����ýڵ����
		q = t;
	}

	//��������Ժ�pָ�����һ����㡣qָ��null
	pHead->next->next = NULL; //
	pHead->next = p;

	return 0;
}

/*
	pHead pSECOND pCur 
*/
int SList_Resve2(SLIST *pHead)
{
	SLIST *pSECOND = NULL, *pCur = NULL, *pTmp = NULL;

	if(NULL == pHead)
	{
		return -1;
	}

	pCur = pHead->next;
	while(pCur)
	{
		pTmp = pCur->next;
		pCur->next = pSECOND;
		pSECOND = pCur;
		pCur = pTmp;
	}

	//����ͷ��
	pHead->next = pSECOND;
}

int SList_Resve3(SLIST *pHead)
{
	SLIST *pCur = NULL, *pCurNext = NULL;
	if(NULL == pHead)
	{
		return -1;
	}

	if(NULL == pHead->next || NULL == pHead->next->next)	//��������
	{
		return -2;
	}

	pCur = pHead->next->next;
	pHead->next->next = NULL;	//��β

	while(pCur)
	{
		pCurNext = pCur->next;
		pCur->next = pHead->next;
		pHead->next = pCur;
		pCur = pCurNext;
	}
}

void main()
{
	SLIST *pHead = NULL;
	int ret = 0;
	//pHead = SList_Creat();
	ret = SList_Creat2(&pHead);
	if(0 != ret)
	{
		printf("SList_Creat2 err: %d\n", ret);
		return;
	}

	SList_Print(pHead);

	SList_NodeInsert(pHead, 20, 19);
	SList_Print(pHead);

	SList_NodeDel(pHead, 19);
	SList_Print(pHead);

	SList_Resve(pHead);
	SList_Print(pHead);

	SList_Resve2(pHead);
	SList_Print(pHead);

	SList_Resve3(pHead);
	SList_Print(pHead);

	SList_Destory(pHead);
	pHead = NULL;

	system("pause");
}
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Node
{
	int data;
	struct Node *next;
}SLIST;

//编写函数SList_Creat，建立带有头结点的单向链表。循环创建结点，
//结点数据域中的数值从键盘输入，以-1作为输入结束标志。链表的头结点地址由函数值返回。

SLIST *SList_Creat();
int SList_Creat2(SLIST **mypHead);
int SList_Print(SLIST *pHead);
int SList_Destory(SLIST *pHead);
int SList_NodeInsert(SLIST *pHead, int x, int y);
int SList_NodeDel(SLIST *pHead, int x);
int SList_Resve(SLIST *pHead);
int SList_Resve2(SLIST *pHead);

//能写出稳健的、长期运算的工作代码  1年工作经验那
SLIST *SList_Creat()
{
	SLIST *pHead = NULL, *pM = NULL, *pCur = NULL;
	int data;

	//1.创建头结点并初始化,头结点数据保存长度
	pHead = (SLIST *)malloc(sizeof(SLIST));
	if(NULL == pHead)
	{
		return NULL;
	}
	pHead->data = 0;
	pHead->next = NULL;

	//2.当前结点赋值
	pCur = pHead;

	do 
	{
		//键盘输入
		printf("\nplease insert the data of node(-1:quit): ");
		scanf("%d", &data);
		if(-1 == data)
		{
			break;
		}

		//添加业务结点
		pM = (SLIST *)malloc(sizeof(SLIST));
		if(NULL == pM)
		{
			//删除创建好的链表
			SList_Destory(pHead);
			return NULL;
		}

		pM->data = data;
		pM->next = NULL;

		//前后链接
		pCur->next = pM;
		pCur = pM;

		//长度
		pHead->data++;
	} while (1);

	return pHead;
}

int SList_Creat2(SLIST **mypHead)
{
	SLIST *pHead = NULL, *pM = NULL, *pCur = NULL;
	int data;
	int ret = 0;

	//1.创建头结点并初始化,头结点数据保存长度
	pHead = (SLIST *)malloc(sizeof(SLIST));
	if(NULL == pHead)
	{
		ret = -1;
		printf("func SList_Creat2() err:%d ", ret);
		return ret;
	}
	pHead->data = 0;
	pHead->next = NULL;

	//2.当前结点赋值
	pCur = pHead;

	do 
	{
		//键盘输入
		printf("\nplease insert the data of node(-1:quit): ");
		scanf("%d", &data);
		if(-1 == data)
		{
			break;
		}

		//添加业务结点
		pM = (SLIST *)malloc(sizeof(SLIST));
		if(NULL == pM)
		{
			//删除创建好的链表
			SList_Destory(pHead);
			
			ret = -2;
			printf("func SList_Creat2() err:%d ", ret);
			return ret;
		}

		pM->data = data;
		pM->next = NULL;

		//前后链接
		pCur->next = pM;
		pCur = pM;

		//长度
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
		//缓存下一个结点位置
		tmp = p->next;
		free(p);//删除当前节点
		p = tmp; //节点指针后移
	}
	return 0;
}

//功能：在值为x的结点前，插入值为y的结点；若值为x的结点不存在，则插在表尾。
int SList_NodeInsert(SLIST *pHead, int x, int y)
{
	SLIST *pCur = NULL, *pPre = NULL, *pM = NULL;

	//根据y的值malloc新结点
	pM = (SLIST *)malloc(sizeof(SLIST));
	if (pM == NULL)
	{
		return -1;
	}
	pM->data = y;
	pM->next = NULL;

	//准备pCur Pre环境
	pPre = pHead;
	pCur = pHead->next;

	while (pCur)
	{
		if (pCur->data == x)
		{
			//插入操作
			break;
		}

		pPre = pCur; //让前驱结点后移
		pCur = pCur->next; //让当前结点后移
	}

	//1 pM结点连接后继链表
	//pM->next = pCur;
	pM->next = pPre->next;
	//2 让前驱结点连接pM 
	pPre->next = pM; 

	return 0;
}

int SList_NodeDel(SLIST *pHead, int x)
{
	SLIST *pCur = NULL, *pPre = NULL;

	//准备pCur Pre环境
	pPre = pHead;
	pCur = pHead->next;

	while (pCur)
	{
		if (pCur->data == x)
		{
			//插入操作
			break;
		}

		pPre = pCur; //让前驱结点后移
		pCur = pCur->next; //让当前结点后移
	}

	if (pCur == NULL)
	{
		printf("没有找到要删除的结点\n");
		return -1;
	}
	//从链表上删除结点
	pPre->next =   pCur->next;
	//释放内存
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

	//初始化逆置环境
	p = pHead->next;
	q = pHead->next->next;

	while (q != NULL)
	{
		//逆置之前把q的后继结点保存
		t = q->next;
		//逆置操作
		q->next = p;

		//3让前驱节点后移  //3 4是打造下一次while循环逆置的环境
		p = q;

		//4让逆置节点后移
		q = t;
	}

	//逆置完成以后p指向最后一个结点。q指向null
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

	//链接头部
	pHead->next = pSECOND;
}

int SList_Resve3(SLIST *pHead)
{
	SLIST *pCur = NULL, *pCurNext = NULL;
	if(NULL == pHead)
	{
		return -1;
	}

	if(NULL == pHead->next || NULL == pHead->next->next)	//无需逆置
	{
		return -2;
	}

	pCur = pHead->next->next;
	pHead->next->next = NULL;	//封尾

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
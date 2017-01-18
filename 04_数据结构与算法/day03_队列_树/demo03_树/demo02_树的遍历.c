#include "stdio.h"
#include "string.h"
#include "stdlib.h"

/*
struct BiNode
{
	int data;
	struct BiNode  *lchild, *rchild;
};
//��������������
typedef struct BiNode BiNode;
//Ҳ������������ ��һ��ָ�����������
typedef struct BiNode *BiTree;
*/


//��������
typedef struct BiNode
{
	int data;
	struct BiNode  *lchild, *rchild;
}BiNode, *BiTree;


//�������
void inOrder(BiNode *root)
{
	if (root != NULL)
	{
		inOrder(root->lchild);
		printf("%d ", root->data);
		inOrder(root->rchild);
	}
	return ;
}
void preOrder(BiNode *root)
{
	if (root != NULL)
	{
		printf("%d ", root->data);
		preOrder(root->lchild);	
		preOrder(root->rchild);
	}
}

void postOrder(BiNode *root)
{
	if (root != NULL)
	{
		postOrder(root->lchild);	
		postOrder(root->rchild);
		printf("%d ", root->data);
	}
}
//����1
//�����ı��ʡ�������������

int g_num;
void countLeafNum(BiNode *root)
{
	if (root != NULL)
	{
		
		countLeafNum(root->lchild); //�ݹ��������������Ҷ�ӽڵ���

		if (root->lchild == NULL && root->rchild==NULL)
		{
			g_num ++;
		}
	
		countLeafNum(root->rchild);//�ݹ��������������Ҷ�ӽڵ���
	}
}

void countLeafNum2(BiNode *root, int *num)
{
	if (root != NULL)
	{

		countLeafNum2(root->lchild, num); //�ݹ��������������Ҷ�ӽڵ���

		if (root->lchild == NULL && root->rchild==NULL)
		{
			(*num) ++;
		}

		countLeafNum2(root->rchild, num);//�ݹ��������������Ҷ�ӽڵ���
	}
}

int GetDepth(BiNode *root)
{
	int depthleft = 0, depthright=0; 
	int depthVal = 0;
	int tmp = 0;

	if (root == NULL)
	{
		depthVal = 0;
		return depthVal;
	}
	//���������߶�
	depthleft = GetDepth(root->lchild);
	//���������߶�
	depthright = GetDepth(root->rchild);

	 tmp = ((depthleft>depthright)? depthleft : depthright);
	depthVal = 1 + tmp; 

	return depthVal;
}

BiNode *copyTree(BiNode *T)
{
	BiNode *newLptr = NULL, *newRptr = NULL;
	BiNode *newNode = NULL;
	if (T->lchild != NULL)
	{
		newLptr =copyTree(T->lchild);
	}
	else
	{
		newLptr = NULL;
	}

	if (T->rchild != NULL)
	{
		newRptr = copyTree(T->rchild);
	}
	else
	{
		newRptr = NULL; 
	}
	newNode = (BiNode *)malloc(sizeof(BiNode));
	if (newNode == NULL)
	{
		return NULL;
	}
	newNode->lchild = newLptr;
	newNode->rchild = newRptr;
	newNode->data = T->data;

	return newNode;
}
void main()
{
	BiNode t1, t2, t3, t4, t5;
	memset(&t1, 0, sizeof(BiNode));
	memset(&t2, 0, sizeof(BiNode));
	memset(&t3, 0, sizeof(BiNode));
	memset(&t4, 0, sizeof(BiNode));
	memset(&t5, 0, sizeof(BiNode));
	t1.data = 1;
	t2.data = 2;
	t3.data = 3;
	t4.data = 4;
	t5.data = 5;
	t1.lchild = &t2;
	t1.rchild = &t3;
	t2.lchild = &t4;
	t3.lchild = &t5;
	//t3������Ϊt5
	inOrder(&t1);
	 printf("\n");
	 preOrder(&t1);
	 printf("\n");
	 postOrder(&t1);
	 g_num = 0;
	 countLeafNum(&t1);
	 printf("g_num: %d \n", g_num);

	 {
		int num = 0;
		countLeafNum2(&t1, &num);
		printf("num: %d \n", num);
	 }

	printf("���ĸ߶�Ϊ��%d \n", GetDepth(&t1));

	{
		BiNode *root = NULL;
		root =	copyTree(&t1);
		printf("��copy��\n�������:");
		inOrder(root);
	}


	
	system("pause");
}


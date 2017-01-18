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

//��������
typedef struct TriTNode 
{
	int data;
	//���Һ���ָ��
	struct TriTNode *lchild, *rchild;
	struct TriTNode *parent;
}TriTNode, *TriTree;


//˫������
#define MAX_TREE_SIZE 100
typedef struct BPTNode
{
	int data;
	int parentPosition; //ָ��˫�׵�ָ�� //�����±�
	char LRTag; //���Һ��ӱ�־��
}BPTNode;

typedef struct BPTree
{
	BPTNode nodes[100]; //��Ϊ�ڵ�֮���Ƿ�ɢ�ģ���Ҫ�ѽڵ�洢��������
	int num_node;  //�ڵ���Ŀ
	int root; //������λ�� //ע�����洢���Ǹ��׽ڵ���������±�
}BPTree;

//��������ݽṹ�ܱ���һ�����������ܣ���ô������why


void main11()
{
	BPTree tree;

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

	//��������ϵ

	//t1������Ϊt2
	t1.lchild = &t2;

	//t1���Һ���Ϊt3
	t1.rchild = &t3;

	//t2������Ϊt4
	t2.lchild = &t4;

	//t3������Ϊt5
	t3.lchild = &t5;


	system("pause");
}

void main()
{
	BiTree p1, p2, p3, p4, p5;

	p1 = (BiTree)malloc(sizeof(BiNode));
	p2 = (BiTree)malloc(sizeof(BiNode));
	p3 = (BiTree)malloc(sizeof(BiNode));
	p4 = (BiTree)malloc(sizeof(BiNode));
	p5 = (BiTree)malloc(sizeof(BiNode));
	memset(p1, 0, sizeof(BiNode));
	memset(p2, 0, sizeof(BiNode));
	memset(p3, 0, sizeof(BiNode));
	memset(p4, 0, sizeof(BiNode));
	memset(p5, 0, sizeof(BiNode));

	p1->data = 1;
	p2->data = 2;
	p3->data = 3;
	p4->data = 4;
	p5->data = 5;

	//��������ϵ

	//t1������Ϊt2
	p1->lchild = p2;

	//t1���Һ���Ϊt3
	p1->rchild = p3;

	//t2������Ϊt4
	p2->lchild = p4;

	//t3������Ϊt5
	p3->lchild = p5;


	system("pause");
}
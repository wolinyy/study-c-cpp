#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "Mylinklist.h"

typedef struct _Teacher
{
	LinkListNode node; //������ҵ��ڵ�ĵ�һ������������
	char name[32];
	char name2[32];
	int age ;
}Teacher;

typedef struct _Student
{
	LinkListNode node; //������ҵ��ڵ�ĵ�һ������������
	char name[32];
	char name2[32];
	int age ;
}Student;

void main()
{
	//����һ������
	int ret = 0, len = 0, i = 0;
	LinkList *list = NULL;
	Teacher t1,t2, t3,t4,t5;
	memset(&t1, 0, sizeof(Teacher));
	memset(&t2, 0, sizeof(Teacher));
	memset(&t3, 0, sizeof(Teacher));
	memset(&t4, 0, sizeof(Teacher));
	memset(&t5, 0, sizeof(Teacher));

	t1.age = 1;
	t2.age = 2;
	t3.age = 3;
	t4.age = 4;
	t5.age = 5;
	list = LinkList_Create();
	if (list == NULL)
	{
		return ;
	}

	//�����������ҵ������
	//ҵ�����ݺ������㷨����Ч���롣����������
	ret = LinkList_Insert(list, (LinkListNode*)&t1, LinkList_Length(list));
	ret = LinkList_Insert(list, (LinkListNode*)&t2, LinkList_Length(list));
	ret = LinkList_Insert(list, (LinkListNode*)&t3, LinkList_Length(list));
	ret = LinkList_Insert(list, (LinkListNode*)&t4, LinkList_Length(list));
	ret = LinkList_Insert(list, (LinkListNode*)&t5, LinkList_Length(list));

	len = LinkList_Length(list);

	//�������л�ȡҵ��ڵ�
	for (i=0; i<LinkList_Length(list); i++)
	{
		struct _Teacher *tmp = (struct _Teacher *)LinkList_Get(list, i);
		if (tmp != NULL)
		{
			printf("age:%d \n", tmp->age);
		}
	}

	//ɾ��������
	while (LinkList_Length(list) > 0)
	{
		//�ڴ��������ɾ��ҵ��ڵ��ʱ�򣬰�ҵ��ڵ��ָ�뷵�ظ������ߣ��Ա�����߽��ж�����߼����ơ�������
		struct _Teacher *tmp  =  (struct _Teacher *)LinkList_Delete(list, 0);
		if (tmp != NULL)
		{
			printf("age:%d \n", tmp->age);
		}
	}
	
	//��������
	LinkList_Destroy(list);

	
	system("pause");
}

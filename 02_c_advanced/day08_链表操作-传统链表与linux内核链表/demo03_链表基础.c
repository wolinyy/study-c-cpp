#include "stdio.h"
#include "string.h"
#include "stdlib.h"

//�Զ������ݽṹ���� ���� �̶���С�ڴ��ı���
typedef struct _Teacher
{
	char name[64];
	int age;
	struct _Teacher *next;
}Teacher;


/*
1 ������ʱ��ָ��ָ��˭���Ͱ�˭�ĵ�ַ����ָ�롣��
2����ֵָ�������ҵ�����֮��Ĺ�ϵ��������
=======����ͼ˵��
*/
Teacher  *main2()
{
	Teacher t1, t2, t3;
	Teacher *p = NULL;
	memset(&t1, 0, sizeof(Teacher));
	memset(&t2, 0, sizeof(Teacher));
	memset(&t3, 0, sizeof(Teacher));
	t1.age = 11;
	t2.age = 22;
	t3.age = 33;

	t1.next = &t2;
	t2.next = &t3;
	t3.next = NULL; //��һ�䲻Ҫ����
	return &t1;
}

//��̬���������
void main()
{
	Teacher *p = NULL;
	p = main2();	//�׳��쳣
	while(p)
	{
		printf("age:%d \n", p->age);
		p = p->next;
	}

	system("pause");
}
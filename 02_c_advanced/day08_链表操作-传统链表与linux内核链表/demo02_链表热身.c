#include "stdio.h"
#include "string.h"
#include "stdlib.h"

typedef struct _Student
{
	char name[64];
	int age;
}Student;

//�Զ������ݽṹ���� ���� �̶���С�ڴ��ı���
typedef struct _Teacher
{
	char name[64];
	int age;
	char *p1 ;
	char **p2;
	Student s1;
	Student *ps1;
}Teacher;

void main01()
{
	Student s1;
	Teacher t1; //���߱�����Ҫ�����ڴ�
	t1.age = 30;
	t1.s1.age = 20;

	//�ṹ������һ��Ԫ�� �� ��һ��ָ�����𡣡���
	t1.ps1 = &s1; //û���ڴ�飬�����ָ��

	t1.ps1->age = 100;

	system("pause");
}

//��Ҫ�Զ����������ͣ����� �̶���С�ڴ��ı���������һ��ģ�ӡ�������
typedef struct _AdvTeacher
{
	char name[64]; 
	int age;
	struct _AdvTeacher *pAdvTeacher; 
	//struct _AdvTeacher myAdvTeacher;
}AdvTeacher;

void main()
{

	AdvTeacher adv; //ջ���
	system("pause");
}


#include "stdlib.h"
#include "stdio.h"
#include "string.h"

//�ṹ��Ķ���

//���������һ���������ͣ�û�з����ڴ档 
////������䣬�����ͷ�
//�ڴ����Լ�����
//��typedef��I����
typedef struct _Teacher
{
	char name[62];
	char c;
	int age;
}Teacher ;

struct _Teacher2
{
	char name[62];
	char c;
	int age;
}t2, t3; //����ṹ������ĵڶ��ַ���

struct 
{
	char name[62];
	char c;
	int age;
}t4; //����ṹ������ĵ�3�ַ���

void demo01()
{
	 //��һ�ַ���
	 Teacher t1; //����c++�����������ڴ� //����ʱȥ

	 Teacher *p =( Teacher *) malloc(sizeof( Teacher));
	//������䣬�����ͷ�
	free(p);
	system("pause");
}

//�β���ָ��
void copyStruct(Teacher *to, Teacher *from)
{
	*to = *from;
}

//�β�ֵ����
int copyStruct2(Teacher to, Teacher from)
{
	to = from;
	return 10;
}

void main()
{
	Teacher t1;

	Teacher t2;

	Teacher *p  = NULL;
	printf(" %d \n", sizeof( Teacher));
	p  = &t1;
	strcpy(t1.name, "name");
	t1.age  = 10; //ͨ��.�ķ����������ṹ��ĳ�Ա��
	p->age = 12; 
	p->age; // . ->�ı�����Ѱַ����������Ѱÿһ����Ա����ڴ����t1���ڴ�ƫ�ơ�����������û�в����ڴ�
	//��������д��û������ġ�

	t2 = t1; //����������ʲô����
	printf("t2.age:%d \n", t2.age);

	{
		Teacher t3;
		int a = 10;
		t3.age = a;
		copyStruct2(t3, t2);
		printf("t3.age: %d \n", t3.age);
		copyStruct(&t3, &t2);
		printf("t3.age: %d \n", t3.age);
	}

	system("pause");
}

/*
void main1()
{
	int **********       a = malloc(100);
	free(a);
}
*/
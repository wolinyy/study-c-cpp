#include "stdlib.h"
#include "stdio.h"
#include "string.h"
typedef struct _A
{
	int a ;
};

//�ṹ��Ķ���
typedef struct _AdvTeacher
{
	char *name; //4
	int age2 ;
	char buf[32];  //32
	int age; //4
}Teacher ; 

void demo01()
{
	int i = 0;
	Teacher * p = NULL;
	p = p - 1;
	p = p - 2;
	p = p +2;
	p = p -p;

	i = (int) (&(p->age)); //1�߼�������cpu�У�����
	printf("i:%d \n", i);

		//&����cpu�ļ��㣬û�ж�д�ڴ棬����˵û��coredown
}

//-> .
void main()
{
	int i = 0;
	i = (int )&(((Teacher *)10)->age );
	
	demo01();
	
	printf("i:%d \n", i);

	//&����cpu�ļ��㣬û�ж�д�ڴ棬����˵û��coredown -->

	system("pause");
}
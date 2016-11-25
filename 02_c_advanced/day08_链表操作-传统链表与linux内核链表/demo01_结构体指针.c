#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct _Teacher
{
	char name[64];
	int age;
}Teacher;

int createTe(Teacher **p)
{
	Teacher *tmp = (Teacher*)malloc(sizeof(Teacher));
	if(NULL == tmp)
	{
		return -1;
	}
	tmp->age = 10;
	*p = tmp;
	return 0;
}

int printTe_01(Teacher *p)
{
	printf("%d\n", p->age);
}

int printTe_02(Teacher **p)
{
	Teacher *tmp = *p;
	printf("%d\n", tmp->age);
}

int FreeTe_01(Teacher *p)
{
	if(NULL != p)
	{
		free(p);
		p = NULL;	//没有意义
	}
	return 0;
}

int FreeTe_02(Teacher **p)
{
	Teacher *tmp = NULL;
	if(NULL != p)
	{
		return 0;
	}

	tmp = *p;
	if(NULL != tmp)
	{
		free(tmp);
	}
	*p = NULL;	//间接修改实参 *p实参的地址

	return 0;
}

void main()
{
	Teacher *myp = NULL;
	createTe(&myp);

	printTe_01(myp);

	/*
	{
		FreeTe_01(myp);
		FreeTe_01(myp);		//抛出异常
	}
	*/
	
	{
		FreeTe_02(&myp);
		FreeTe_02(&myp);
	}
	
	system("pause");
}
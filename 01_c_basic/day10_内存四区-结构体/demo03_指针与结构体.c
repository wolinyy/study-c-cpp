#include<stdio.h>
#include<stdlib.h>
#include <string.h>

typedef struct  _mydata
{
	int num;
	char str[100];
}mydata;

void changes(mydata ddt)  //ֵ���ݣ��½�һ����������ʵ�ʲ�����ֵ
	//ʹ�ýṹ����Ϊ�������˷��ڴ棬��Ҫ�½�һ���������ṹ��ܴ�
{
	ddt.num = 100;
	printf("\nchanges =%x,%x, %x\n", &ddt, &ddt.num, &ddt.str);	//changes�����ڲ��ṹ��ĵ�ַ
}

void changeall(mydata *p) //���ݵ�ַ�����ݵ�ַ��ֵ
{
	(*p).num = 1000;	//*���ݵ�ַȡ�����ݣ�ȡ�������ݽ��и�ֵ
}
//�����ڲ��ı�ṹ���Ա����	����Ҫ��ַ����ַ��ָ�뱣��

void main()
{

	mydata md, *p = NULL;
	p = (mydata *)malloc(sizeof(mydata));

	md.num = 123;
	strcpy(md.str, "abc");

	p->num = 321;
	strcpy(p->str, "ABC");

	printf("%d, %s\n", (*(&md)).num, (&md)->str);
	printf("%d, %s\n", (*p).num, p->str);

	changes(md);
	printf("%d, %s\n", (*(&md)).num, (&md)->str);
	changeall(&md);
	printf("%d, %s\n", (*(&md)).num, (&md)->str);

	free(p);
	system("pause");
}
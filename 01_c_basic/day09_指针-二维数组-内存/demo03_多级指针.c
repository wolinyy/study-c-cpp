#include<stdio.h>
#include<stdlib.h>

int a = 10;
int b = 20;

void demo01()
{
	double db = 10.8;
	double * p = &db;
	double **pp = &p; //����ָ��ĵ�ַ
	printf("%x", &pp);//�ڴ�鿴pp
}

void change(int *p)	//�½�һ��ָ�����������p�ĵ�ַ
{
	p = &b;	//�µ�ָ�������ԭ����ָ�������һ��
}

void changeX(int *  * pp)  //�����ڲ��ı�һ��ָ��
{
	*pp = &b; //
}

void demo02()
{
	int x = 10;
	int *x1 = &x;   //32λϵͳ�������κ����Ͷ����ĸ��ֽ�
	int **x2 = &x1;
	int ***x3 = &x2;
	int ****x4 = &x3;
}

void main()
{
	int *p = &a; //*p��a�ȼ�
	//p = &b;//*p��b�ȼ�

	demo01();
	changeX(&p);
	printf("%d", *p);

	demo02();

	getchar();
}







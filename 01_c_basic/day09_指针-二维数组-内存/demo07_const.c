#include<stdio.h>
#include<stdlib.h>

int  * const p1;		//��ַֻ��
const int *p2;			//��ַָ���ֵֻ��
int const * p3;			//��ַָ���ֵֻ��
int  const * const p4;	//��ַ��ָ���ֵ��ֻ��
const int * const p5;	//��ַ��ָ���ֵ��ֻ��

void demo01()
{
	int x = 10;
	int y = 20;
	const int * const p1 = &x;
	//*���Ҷ���const,���ܸı�ָ�򡣲��ܸı�����
	//int  const * const p2 ;	//p2��: ��������ⲿ�ģ�������ʼ����������

	//*p1 = 10;  //error C2065: ��p��: δ�����ı�ʶ��
	//p1 = &y;
}

void demo02()
{
	int num = 10;
	const int  cnum = 9;
	//int const *p;
	// const int *p;   �ȼ۵Ĺ�ϵ
	int * const p=&num;

	//const ��* ��ߣ����ݲ����Ըģ�ָ����Ը�
	//const��*�ұߣ����ݿ��Ըģ�ָ�򲻿��Ը�

	*p = 6;
//	p = &cnum;
}

void demo03()
{
	int num = 10;
	const int  cnum = 9;

	 int const *p;
	// const int *p;   �ȼ۵Ĺ�ϵ
	 //���Ըı�ָ�򣬲����Ըı�ָ�������
	p = &num;  
	p = &cnum;
	//*p = 7;
}
void demo04()
{
	int num = 10;
	const int  cnum = 9;

	const int *p;  
	//���ָ�벻�ܸı�ָ�������
	//���Ըı�ָ��˭
	p = &num;  //p���Ա仯
	p = &cnum;
	//*p = 5;
}

void demo05()
{
   const int a = 10;	 //����
   //a = 9;
}

void demo06()
{
	int num = 100;
	int const  *p = &num;
	//*p = 0;
	int *p1 = (int *)p;
	*p1 = 79;
	printf("%d", num);
}

void demo07()
{
	const int x = 5; //ֻ�����Ʊ���������ֱ���޸�
	int  *p = &x;
	*p = 3;
	printf("%d", x);//����޸�
}

void main()
{
	demo01();
	demo02();
	demo03();
	demo04();
	demo05();
	demo06();
	demo07();
	
	system("pause");
}
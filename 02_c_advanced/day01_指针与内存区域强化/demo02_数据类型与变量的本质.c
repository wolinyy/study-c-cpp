#include "stdlib.h"
#include "string.h"
#include "stdio.h"

//�������Ϳ����Ϊ����������ģ�ߣ�ģ�ӣ����ǹ̶��ڴ��С�ı�����
//�������ͷ�Ϊ���֣�һ���Ǽ򵥵��������ͣ�һ���Ǹ��ӵ��������͡�
//�������ӵ��������Ͳ����ü򵥵��������͵�˼άȥ˼������
//�����ı������������̶���С���ڴ�

typedef int u32 ;

struct Teacer
{
	char name[100];
	int age ;
};

typedef struct Teacer Teacer;

typedef struct _Teacer2
{
	char name[100];
	int age ;
}Teacer2;

void main(void)
{
	int b ; //����c���������ҷ���4���ֽڵ��ڴ�

	int a[10];  //����c���������ҷ���40���ֽڵ��ڴ�
	int *p1, p2;

	printf("&a:%d, a:%d \n" , &a, a);

	//ͬ�������� +1 ��һ�� 
	//�������Ͳ�һ�� 
	// *(a + 1) => a[i]		=>		a + 1 => &a[i]
	printf("&a+1:%d, a+1:%d \n", &a +1 , a +1);

	printf("sizeof(int):%d\n", sizeof(int));

	printf("sizeof(int *):%d\n", sizeof(int *));

	printf("sizeof(u32):%d\n", sizeof(u32));

	printf("sizeof(Teacer):%d\n", sizeof(Teacer));

	printf("sizeof(Teacer2):%d\n", sizeof(Teacer2));

	/*
	�������ͣ�ѹ����ѧ�ߵ�������ɽ
		1����������
		2������ָ��
		3���������ͺ�����ָ��Ĺ�ϵ
	*/

	b = 10;	//ֱ���޸�
	printf("b=%d \n", b);
	*((int *)&b) = 20;	//����޸�
	printf("b=%d \n", b);

	system("pause");
}
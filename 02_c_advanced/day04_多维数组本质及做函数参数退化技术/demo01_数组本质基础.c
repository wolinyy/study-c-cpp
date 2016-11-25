#include "stdlib.h"
#include "string.h"
#include "stdio.h"

int demo01()
{
	int i = 0;
	int a[10] = {1,2}; //������ʼ��Ϊ0
	int b[] = {1,2};
	int c[20] = {0};

	for(i=0; i<10; i++)
	{
		printf("%d", a[i]);
	}

	memset(a, 0, sizeof(a));

	printf("�õ���������ĵ�ַa: %d \n", &a);
	printf("�������Ԫ�صĵ�ַa: %d \n", a);
}

typedef struct _Teacher
{
	char name[20];
	int age;
}Teacher;

void demo02()
{
	int i = 0;
	//����һ����������
	typedef int MyArrayType[5]; //int 
	MyArrayType myArray; //int myArray[5];

	for (i=0; i<5; i++)
	{
		myArray[i] = i +1;
	}
	for (i=0; i<5; i++)
	{
		printf("%d \n", myArray[i]);
	}
}

//��ʾ���ͨ���������� ������һ��ָ���������͵�ָ�����
void demo03()
{
	int i = 0;
	//����һ����������
	typedef int MyArrayType[5]; //int 

	//������һ�� �������͵�ָ��
	MyArrayType *pArray = NULL; //59

	int a[5];

	//��ζ���һ����������ָ�� 
	{
		int a1;
		int *p1 = NULL;

		p1 = &a1; //�Ա���ȡ��ַ������ָ��
	}
	pArray = &a;

	//��ͨ������ָ��ķ�ʽ������a[5]����ڴ�
	for (i=0; i<5; i++)
	{
		(*pArray)[i] = i+1; //a[i] = i+1;
	}

	for (i=0; i<5; i++)
	{
		printf("%d \n", (*pArray)[i]);
	}

	system("pause");
}

//��������ָ������
void demo04()
{
	int i = 0;
	//����Ƕ�����һ�����ͣ������������������
	typedef int MyArrayType[5]; //int 

	//����Ƕ�����һ�����ͣ�������һ��ָ�����ͣ�������һ��ָ�������ָ�����͡�������//����ָ��
	typedef int (*MyPArrType)[5] ;

	MyPArrType myPoint; //int b[5]; //96

	int b[5];
	{
		int b1 = 0;
		int *pb1 = &b1;  //����ȡ��ַ��ָ�븳ֵ
	}
	myPoint = &b; //����ȡ��ַ��ָ�븳ֵ 

	for (i=0; i<5; i++)
	{
		(*myPoint)[i] = i+1;
	}

	for (i=0; i<5; i++)
	{
		printf("%d  ", (*myPoint)[i]);
	}

	system("pause");
}

void main()
{
	int i = 0;
	int c[5];
	int (*myArrayPoint)[5] ; //���߱�����ҿ����ĸ��ֽ��ڴ�
	{

		//����һ����������
		typedef int MyArrayType[5]; //int 
		//������һ�� �������͵�ָ��
		MyArrayType *pArray = NULL; //59
		printf("sizeof(MyArrayType):%d\n", sizeof(MyArrayType));
		printf("sizeof(pArray):%d\n", sizeof(pArray));
		printf("sizeof(*pArray):%d\n", sizeof(*pArray));
	}

	{	
		//����Ƕ�����һ�����ͣ�������һ��ָ�����ͣ�������һ��ָ�������ָ�����͡�������//����ָ��
		typedef int (*MyPArrType)[5] ;
		MyPArrType myPoint; //int b[5]; //96
		printf("sizeof(MyPArrType):%d\n", sizeof(MyPArrType));
		printf("sizeof(myPoint):%d\n", sizeof(myPoint));
		printf("sizeof(&myPoint):%d\n", sizeof(&myPoint));
	}

	myArrayPoint = &c;
	for (i=0; i<5; i++)
	{
		(*myArrayPoint)[i] = i+1;
	}

	for (i=0; i<5; i++)
	{
		printf("%d  ", (*myArrayPoint)[i]);
	}

	system("pause");
}
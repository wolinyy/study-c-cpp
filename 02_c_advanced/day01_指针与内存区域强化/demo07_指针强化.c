#include "stdlib.h"
#include "stdio.h"
#include "string.h"

//����ָ�����

//��ʾ��Ӹ�ֵ
void ��Ӹ�ֵ()
{
	int a = 0;
	int *p = NULL; //

	p = &a;
	*p = 11; //��Ӹ�ֵ *p����һ��Կ�ף�ͨ��ָ���һ���ţ�ȥ�޸��ź�����ڴ�ռ�
	printf("sizeof(int *):%d, sizeof(p):%d\n", sizeof(int *), sizeof(p));
	printf("*p:%d", a);
}

//��ʾ
//*p���ڵȺŵ����
//*p���ڵȺŵ��ұ�
void ��ֵ��ֵ()
{
	int a = 0;
	int *p = NULL; //����һ��ָ�룬����ʼ����

	p = &a;
	*p = 11; //��Ӹ�ֵ *p����һ��Կ�ף�ͨ��ָ���һ���ţ�ȥ�޸��ź�����ڴ�ռ�
	{
		int c = 100;
		c = *p;
		printf("c:%d", c);
	}
	{
		char buf1[20];
		char buf2[20];
		
		char *p1 = buf1;
		char *p2 = buf2;
		strcpy(buf1, "abcd");

		while (*p1!='\0')
		{
			*p2++ = *p1++; //���Ӽ��ǣ�
		}
		*p2 = '\0';
		printf("\nbuf2:%s", buf2);
	}
}


//��ʾ
//pָ��Ҳ��һ���������ͣ�ָ����������;����������ԣ�
//ָ����������ͣ���ָ����ָ����ڴ�ռ���������͡�
/*
int getData01(char a);
int getData01(char *p, int *len);
int getData02(char **p, int *len);
int getData03(char *p[], int a);
int getData03(char buf[][30], int n);
*/
int ָ�벽��()
{
	int a[5] = {1, 2, 3, 4, 5};
	int *p = a;

	//������������ԭ���� a��һ��ָ�� &aҲ��һ��ָ�룬����a &a����ָ����������Ͳ�һ����
	//ָ��Ĳ������㹫ʽΪ��p+1 ===>(unsigned int)p + sizeof(*p);
	//���۷ǳ��򵥣�ָ�벽������ ��ִ���ڴ�ռ����������������
	printf("p:%d, p+1:%d\n", p, p+1);
	printf("a:%d, a+1:%d\n", a, a+1); //a��������Ԫ�ص�ַ������������Ԫ�أ���Ԫ����int�ͱ���������p++,����Ϊ4
	printf("&a:%d, &a+1:%d\n", &a, &a+1);//&a��������������int[5],�����������飬&a++��������4*5 = 20; 
}

//���ڻ����������ͣ��ӱ����ú�������ֵ�������ַ���
int Add10(int a)
{
	return a+10;
}

void Add20(int a, int result)
{
	result = a+20;
}

void Add30(int a, int *result)
{
	*result = a+30;
}

void ָ�����1()
{
	int a = 10;
	int result = 0;

	Add30(a, &result);
	printf("result:%d \n", result);
}


//��������ʱ��1��ָ�루�βΣ�ȥ�ı�0��ָ���ֵ
void getLen(int *p)
{
	int a = 200;
	*p = a;
}

//0��ָ�뵽1��ָ�������
//��Ӹ�ֵ��������������
void ָ�����2()
{
	//01������������ͨ��ʵ�Σ�һ���β� 
	int a = 100;
	int *p = NULL;
	int result;

	//02�������� ʵ��ȡ��ַ�����β�
	p = &a;

	//03 *p�βμ���޸�ʵ�ε�ֵ
	//*p = a;
	getLen(&a);

	printf("��Ӹ�ֵ����������������������Ҫ\n");
}

//���͵Ĵ����÷�
void getLen2(int *p)
{
	int a = 200;
	*p = a;
}

int ָ��δָ���ڴ�()
{
	int *a = NULL;
	getLen(a);
	getchar();
}

//ָ������ԣ������������
//һ��ָ�������

void main()
{
	��Ӹ�ֵ();
	��ֵ��ֵ();
	ָ�벽��();
	ָ�����1();
	ָ�����2();
	ָ��δָ���ڴ�();

	system("pause");
}
#include <stdio.h>

#define X 100
#define ������ main
#define ��ӡ printf

void ����()
{
	//X = 5;		//error C2106: ��=��: �����������Ϊ��ֵ

	const int a = 20;
	//a = 12;		//error C2166: ��ֵָ�� const ����
	��ӡ("hello world X=%d, a=%d \n", X, a);
}

void ��������()
{
	int a, b, c;

	//��������������������������...��������;

	int A;
	int B;
	int C,D;
	printf("%x,%x,%x,%x,%x,%x\n", &a, &b, &c, &A, &B, &C);

	//printf("%d", E);	 //����	1	error C2065: ��E��: δ�����ı�ʶ��
}

void �����ӷ�()
{
	int a = 10;
	int b = 5;
	int c = 0;

	_asm				//_asm�������
	{
		mov eax,a	//	  ��a��ֵ��ֵ��eax����Ĵ���
		add eax,b		 //eax��ֵ��b
		mov  c,eax		  //eax��ֵ��c
	}

	printf("a=%d,b=%d,c=%d\n", a , b, c);
}

void ������ʼ��()
{
	int num;
	printf("%x\n", &num);
	printf("%d\n", num);	//����ʼ����ֵδ֪
}

void ������()
{
	������ʼ��();

	����();
	��������();
	�����ӷ�();

	system("pause");
}
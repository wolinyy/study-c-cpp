#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	ת���ַ� 	���� 									ASCII��ֵ��ʮ���ƣ�
	\a 			����(BEL) 								007
	\b 			�˸�(BS) ������ǰλ���Ƶ�ǰһ�� 		008
	\f 			��ҳ(FF)������ǰλ���Ƶ���ҳ��ͷ 		012
	\n 			����(LF) ������ǰλ���Ƶ���һ�п�ͷ 	010
	\r 			�س�(CR) ������ǰλ���Ƶ����п�ͷ 		013
	\t 			ˮƽ�Ʊ�(HT) ��������һ��TABλ�ã� 		009
	\v 			��ֱ�Ʊ�(VT) 							011
	\\ 			��һ����б���ַ�''\' 					092
	\' 			����һ�������� 							039
	\" 			����һ��˫�����ַ� 						034
	\? 			����һ���� 								063
	\0 			���ַ�(NULL) 							000

	\ooo		1��3λ�˽�����������������ַ� 			��λ�˽���
	\xhh 		1��2λʮ������������������ַ� 			��λʮ������
*/

void Escape_Character()
{
	char *p = "\a\b\f\n\r\t\v\\\'\"\?\011\x0a\0abc";	// \0�����ַ�������Ĳ��㳤��
	printf("strlen:%d\n", strlen(p));

	while(*p)
	{
		printf("<%c\t%d>\n", *p, *p);
		p++;
	}
}

void demo01()
{
	printf("hello\f gogogo\v");	//�ںڴ���������ģʽ�£� \v��һ�������ַ�

	getchar();
}

void demo02()
{
	printf("hello gogogo\r");	//�ù��ص���ͷ
	getchar();

}

void demo03()	  
{
	printf("\\n\\n");  //  //ת��Ϊ1��/
	getchar();
}

void demo04()
{
	printf("Google");
	printf("\t");//�Ʊ���������ո�
	printf("Google");
	getchar();
}

void demo05()
{
	printf("Google");
	printf("\b"); //�˸�
	getchar();
}

void main()
{
	Escape_Character();

	demo01();
	demo02();
	demo03();
	demo04();
	demo05();

	system("pause");
}
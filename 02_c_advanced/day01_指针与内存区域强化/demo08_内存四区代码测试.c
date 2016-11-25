#include "stdio.h"
#include "stdlib.h"
#include <string.h>

//��ʾͨ���Ѿ�̬�洢�����ݷ����ϲ���ú���
//��ʾͨ��ȫ�ֱ��������ϲ���ú���
//��ʾͨ��stack�������ظ��ϲ㺯��

char g_Buf[10];

char * Demo31_Number2String_const(int i)
{
	if (i==1) 
	{
		return "one";
	} 
	else if (i==2) 
	{
		return "two";
	} 
	else if (i==3) 
	{
		return "three";
	} 
	else 
	{
		return "err";
	}
}

//debug release
//mult thread
char * Demo32_Number2String_globle(int i)
{
	memset(g_Buf, 0, sizeof(g_Buf));

	if (i==1) 
	{ 
		strcpy(g_Buf, "one");
	} 
	else if (i==2) 
	{
		strcpy(g_Buf, "two");
	} 
	else if (i==3) 
	{
		strcpy(g_Buf, "three");
	}
	else
	{
		strcpy(g_Buf, "err");
	}
	return g_Buf ;
}

//debug release
char * Demo33_Number2String_stack(int i)
{
	char tmp[10];
	memset(tmp, 0, sizeof(tmp));
	if (i==1) 
	{ 
		strcpy(tmp, "one");
	} 
	else if (i==2) 
	{
		strcpy(tmp, "two");
	} 
	else if (i==3) 
	{
		strcpy(tmp, "three");
	} 
	else 
	{
		strcpy(tmp, "err");
	}
	return tmp ;
}

int main_01()
	//int main()
{
	int		rv = 0;
	char	*pTmp = NULL;
	char buf[20];

	printf("Demo31_Number2String_const(1)--->%s \n", Demo31_Number2String_const(1));
	printf("Demo32_Number2String_globle(2)--->%s \n", Demo32_Number2String_globle(2));
	printf("Demo33_Number2String_stack(3)--->%s \n", Demo33_Number2String_stack(3));
	return rv;
}

//�������㱨��ͬ���ַ�������һ���ط�����̬�洢��
void * Demo34_Func1()
{
	char *p1 = "abc";
	return p1;
}

void * Demo35_Func2()
{
	//char *p2 = "1234";
	char *p2 = "abc";
	return p2;
}

int main_02()
{
	int		rv = 0;
	char	*pTmp = NULL;

	pTmp = Demo34_Func1();
	printf("Demo34_Func1 pTmp+1 %d \n", pTmp+1);

	pTmp = Demo35_Func2();
	printf("Demo35_Func2 pTmp+1 %d \n", pTmp+1);

	return rv; 
}

int main()
{
	main_01();
	main_02();

	getchar();
}


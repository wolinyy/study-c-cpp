#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//Ұָ������������
//ָ�����������ָ�ڴ�ռ������������ͬ�ĸ���


//���Ұָ��ķ���
//1����ָ��ʱ ��ָ�������ֵ��null
//2 �ͷ��ڴ�ʱ�����ж�ָ������Ƿ�Ϊnull 
//3 �ͷ��ڴ���Ϻ󣬰�ָ��������¸�ֵ��null

//
void main22()
{
	char *p = NULL;
	p = (char *)malloc(100); //char p[100];
	strcpy(p, "abcdefg");

	//��ҵ��
	//�˴�ʡ��5000�֡���������
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}

	//��ҵ��
	//�˴�ʡ��5000�֡���������
	if (p != NULL)
	{
		free(p);
	}
	system("pause");
}

char *getMem2(int count)
{
	char *tmp = NULL;
	tmp = (char *)malloc(100*sizeof(char)); //char tmp[100];
	return tmp;
}

//ʵ�κ��β���������ͬ�ĸ���
void getMem3(int count, char *p)
{
	char *tmp = NULL;
	tmp = (char *)malloc(100*sizeof(char)); //char tmp[100];
	p = tmp; //����������£�����βθ�ֵ�ˣ�û�и�ʵ�θ�ֵ 
	//ֱ���޸�ʵ��ûϷ�������������� ʵ�κ��β���������ͬ�ĸ���
	//return tmp;
}

void getMem4(int count, char **p /*out*/)
{
	char *tmp = NULL;
	tmp = (char *)malloc(100*sizeof(char)); //char tmp[100];
	//p = tmp; //����������£�����βθ�ֵ�ˣ�û�и�ʵ�θ�ֵ 
	//ֱ���޸�ʵ��ûϷ�������������� ʵ�κ��β���������ͬ�ĸ���
	//��ӵ��޸�ʵ��
	*p = tmp;
	//return tmp;
}

//�������õ�ʱ����������޸Ĳ�ʵ��
int FreeMem2(char *p)
{
	if (p ==NULL)
	{
		return -1;
	}
	if (p != NULL)
	{
		free(p);
		p = NULL; //���ʵ�θ��ĵ��������޸��� �޸Ĳ���ʵ�Ρ���������
	}
	return 0;
}

void main()
{
	char *myp = NULL;
	myp = getMem2(100);
	getMem3(100, myp);

	getMem4(100, &myp);

	//��ҵ�����
	//�� 50000
	FreeMem2(myp);

	FreeMem2(myp);
}




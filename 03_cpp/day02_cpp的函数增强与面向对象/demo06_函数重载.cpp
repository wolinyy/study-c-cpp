#include "iostream"
using namespace std;

//��������һ�������ǲ���������һ�������Ͳ�һ������������˳��Ҳ��һ��������
//�������ء���
//��������ֵ�������жϺ������صı�׼������
void myprint(int a)
{
	printf("a:%d \n", a);
}

void myprint(int a, char *p)
{
	printf("a:%d \n", a);
}

void myprint(char *p, int a)
{
	printf("a:%d \n", a);
}


void myprint(double a)
{
	printf("a:%d \n", a);
}

// int myprint(double a)
// {
// 	printf("a:%d \n", a);
// }

void main71()
{

	myprint(10);
	myprint(10,"ddddd");
	myprint("ddd",11);
	system("pause");
}

//��������������Ĭ�Ϻ������� ���ֶ���������

int func(int a, int b , int c= 0)
{
	printf("a:%d ", a);
	return 0;
}

int func(int a, int b)
{
	printf("a:%d ", a);
	return 0;
}

void main()
{
	int c = 0;
	//���ڶ����ԣ�����ʧ�ܣ����벻��ͨ��
	//c = func(1, 2); //�����ԣ����������ֲ����������ĸ���������	�����غ����ĵ��ò���ȷ
	c = func(1, 2, 3); //�����ԣ����������ֲ����������ĸ���������
	system("pause");
}
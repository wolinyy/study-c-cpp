#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//nameinfo������
struct nameinfo	   //struct������ʡ��
{
	char name[50];
	char phone[50];
	int num;
};

struct    //�����ṹ��
{
	char name[50];
	char phone[50];
	int num;
};		  //��������û���κ�����

struct    //�����ṹ��
{
	char name[50];
	char phone[50];
	int num;
} a1,a2,a3 = {"name", "phone", 123};	 //������

void main()
{
	struct nameinfo     myinfo;//����һ������  int a;
	myinfo.num = 100;	//ͨ��.���ʽṹ���Ա
	printf("�ṹ��ı����%d", myinfo.num);
	//myinfo.name = "ABC";	�ַ��������Ը�ֵ�Ÿ�ֵ
	//��ʼ���ַ�������һ��sprintf(stdio),�ڶ���strcpy (string)
	sprintf(myinfo.name, "wolin");
	strcpy(myinfo.phone, "12345678901");

	printf("\nname=%s,",myinfo.name);
	printf("\n phone=%s", myinfo.phone);
	printf("\nname=%s,",a3.name);
	printf("\n phone=%s", a3.phone);

	system("pause");
}
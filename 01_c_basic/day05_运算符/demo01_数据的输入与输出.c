#include<stdio.h>
#include<stdlib.h>

void demo01()
{
	int x;
	char c;
	char buf[32];
	printf("������������");
	scanf("%d", &x);
	printf("\n�����������Ϊ: %d\n", x);

	getchar();

	printf("�������ַ���");
	scanf("%c", &c);
	printf("\n��������ַ�Ϊ: %c\n", c);

	getchar();

	printf("�������ַ�����");
	scanf("%s", buf);
	printf("\n��������ַ���Ϊ: %s\n", buf);

	getchar();
}

void demo02()
{
	char ch = getchar();
	printf("%4c\n", ch);
}

void demo03()
{
	int x;
	char str[30];

	printf("%d\n", 1234);
	printf("%10d\n", 1234);//10���ڿ��4����������6�����ַ�
	scanf("%d", &x);
	sprintf(str, "color%4d", x);  //%4d�Զ��ṩ�ո�
	system(str);
}

void main()
{
	demo01();
	demo02();
	demo03();

	system("pause");
}
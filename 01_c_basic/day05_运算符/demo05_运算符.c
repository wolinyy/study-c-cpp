#include <stdlib.h>
#include <stdio.h>

void ���������()
{
	int a = (1, 2,3,4);
	int b = (a = 3, a += 5, a + 1);

	printf("%d,%d\n", a,b);
}

void ��·���ʽ()
{
	int num = 0; //�߼��룬��һ�������������������������ִ��
	int c = 2;
	int x = 10;
	int y = 3; //�߼���ֻҪ��һ��������������������Ҳ��ִ����

	num &&++c;
	printf("%d,%d", num, c);

	0 || ++y;
	printf("\n%d,%d", x, y);
}

void ��ֵ�����()
{
	int a, b, c, d;
	a = b = c = d = 3;

	a += a *= a += a /= 2;
	printf("a = %d\n", a);

	b += 1;
	c -= 2;
	d %= 2;
	a /= 3;
	printf("a = %d\tb = %d\tc = %d\td = %d\n", a ,b, c , d);
}

void ��ϵ�����()
{
	char ch = 'A';
	while ( ch<='Z') //�ַ�ѭ��
	{
		putchar(ch); //��ӡ�ַ�
		ch++;	//�ַ�����
	}
	printf("\n");
}

void �߼������()
{
	int a, b, c;
	a = 11, b = 2, c = 3;

	!a ? printf("true:%d", !a) : printf("false:%d", !a);printf("\n");
	!!a ? printf("true:%d", !!a) : printf("false:%d", !!a);printf("\n");

	b > c || a > c ? printf("true"):printf("false");printf("\n");
	b > c && a > c ? printf("true"):printf("false");printf("\n");
}

void �����Լ������()
{
	int num = 9;
	printf("%d\n", --num);//���Լ�,�ٵ���
	printf("%d\n", num);
	printf("%d\n", num--);//�ȵ��ã����Լ�
	printf("%d\n", num);
}

void main()
{
	//���������();
	//��·���ʽ();
	//��ֵ�����();
	//��ϵ�����();
	�߼������();
	�����Լ������();

	system("pause");
}
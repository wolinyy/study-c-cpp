#include<stdio.h>
#include<stdlib.h>

/*
		ջ������
	----------------
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |

		�ѿ�����
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |
	----------------

		ȫ��������
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |
	----------------

		����������
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |
	----------------
*/


//������
int add(int a, int b)
{

	return a + b;
}

int sub(int a, int b)
{

	return a - b;
}

#define X 10
#define Y "abc"

//ȫ����
int a1, a2;
extern int a1;
extern int a2;
int c1;
int c2;

//��̬������
static int b1;
static int b2;

//ջ��
void stack()
{
	int a1,b1;
	static int a2, b2;

	printf("&a1 = %p\n", &a1);
	printf("&b1 = %p\n", &b1);
	printf("&a2 = %p\n", &a2);
	printf("&b2 = %p\n", &b2);
}

void main()
{
	int *p1 = malloc(sizeof(int));
	int *p2 = malloc(sizeof(int));

	//ջ
	printf("&p1 = %p\n", &p1);
	printf("&p2 = %p\n", &p2);
	//��
	printf("p1 = %p\n", p1);
	printf("p2 = %p\n", p2);
	//������
	printf("add = %p\n", add);
	printf("sub = %p\n", sub);
	printf("stack = %p\n", stack);
	printf("main = %p\n", main);

	stack();

	printf("&X = %p\n", X);
	printf("&Y = %p\n", &Y);

	printf("&a1 = %p\n", &a1);
	printf("&a2 = %p\n", &a2);

	printf("&b1 = %p\n", &b1);
	printf("&b2 = %p\n", &b2);

	printf("&c1 = %p\n", &c1);
	printf("&c2 = %p\n", &c2);

	free(p1);
	free(p2);
	system("pause");
}

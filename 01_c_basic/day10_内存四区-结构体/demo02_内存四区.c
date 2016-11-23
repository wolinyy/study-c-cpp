#include<stdio.h>
#include<stdlib.h>

/*
		栈口向下
	----------------
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |

		堆口向上
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |
	----------------

		全局区向上
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |
	----------------

		代码区向上
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |
	|			   |
	----------------
*/


//代码区
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

//全局区
int a1, a2;
extern int a1;
extern int a2;
int c1;
int c2;

//静态常量区
static int b1;
static int b2;

//栈区
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

	//栈
	printf("&p1 = %p\n", &p1);
	printf("&p2 = %p\n", &p2);
	//堆
	printf("p1 = %p\n", p1);
	printf("p2 = %p\n", p2);
	//代码区
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

#include <stdlib.h>
#include <stdio.h>

void 逗号运算符()
{
	int a = (1, 2,3,4);
	int b = (a = 3, a += 5, a + 1);

	printf("%d,%d\n", a,b);
}

void 短路表达式()
{
	int num = 0; //逻辑与，有一个不符合条件，后面的条件不执行
	int c = 2;
	int x = 10;
	int y = 3; //逻辑或，只要有一个符合条件，后面条件也不执行了

	num &&++c;
	printf("%d,%d", num, c);

	0 || ++y;
	printf("\n%d,%d", x, y);
}

void 赋值运算符()
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

void 关系运算符()
{
	char ch = 'A';
	while ( ch<='Z') //字符循环
	{
		putchar(ch); //打印字符
		ch++;	//字符自增
	}
	printf("\n");
}

void 逻辑运算符()
{
	int a, b, c;
	a = 11, b = 2, c = 3;

	!a ? printf("true:%d", !a) : printf("false:%d", !a);printf("\n");
	!!a ? printf("true:%d", !!a) : printf("false:%d", !!a);printf("\n");

	b > c || a > c ? printf("true"):printf("false");printf("\n");
	b > c && a > c ? printf("true"):printf("false");printf("\n");
}

void 自增自减运算符()
{
	int num = 9;
	printf("%d\n", --num);//先自减,再调用
	printf("%d\n", num);
	printf("%d\n", num--);//先调用，再自减
	printf("%d\n", num);
}

void main()
{
	//逗号运算符();
	//短路表达式();
	//赋值运算符();
	//关系运算符();
	逻辑运算符();
	自增自减运算符();

	system("pause");
}
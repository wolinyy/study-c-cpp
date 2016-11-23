#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void  msg()
{
	MessageBoxA(0, "AAA", "BBB", 0);
}

void  add(int a, int b)
{
	a + b;
}

int jia(int a, int b)
{
	return a + b;
}

int cheng(int a, int b)
{

	return a*b;
}

void main()
{
	int (*p)(int, int);
	void (*pA)();

	p = jia;
	printf("\n%d", p(30, 4)); //间接调用
	p = cheng;
	printf("\n%d", cheng(30, 4));
	pA = msg;
	pA();

	printf("\n%x,%x", add, &add);//编译器会自动将函数名解析为函数地址
	//add->&add

	getchar();
}
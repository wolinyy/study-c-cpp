#include<stdio.h>
#include<stdlib.h>

int a = 10;
int b = 20;

void demo01()
{
	double db = 10.8;
	double * p = &db;
	double **pp = &p; //接收指针的地址
	printf("%x", &pp);//内存查看pp
}

void change(int *p)	//新建一个指针变量，接受p的地址
{
	p = &b;	//新的指针变量与原来的指针变量不一样
}

void changeX(int *  * pp)  //函数内部改变一个指针
{
	*pp = &b; //
}

void demo02()
{
	int x = 10;
	int *x1 = &x;   //32位系统，无论任何类型都是四个字节
	int **x2 = &x1;
	int ***x3 = &x2;
	int ****x4 = &x3;
}

void main()
{
	int *p = &a; //*p与a等价
	//p = &b;//*p与b等价

	demo01();
	changeX(&p);
	printf("%d", *p);

	demo02();

	getchar();
}







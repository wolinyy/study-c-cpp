#include<stdio.h>
#include<stdlib.h>
#include <string.h>

typedef struct  _mydata
{
	int num;
	char str[100];
}mydata;

void changes(mydata ddt)  //值传递，新建一个变量接受实际参数的值
	//使用结构体作为参数，浪费内存，需要新建一个变量，结构体很大。
{
	ddt.num = 100;
	printf("\nchanges =%x,%x, %x\n", &ddt, &ddt.num, &ddt.str);	//changes函数内部结构体的地址
}

void changeall(mydata *p) //传递地址，根据地址赋值
{
	(*p).num = 1000;	//*根据地址取出内容，取出的内容进行赋值
}
//函数内部改变结构体成员变量	，需要地址，地址用指针保存

void main()
{

	mydata md, *p = NULL;
	p = (mydata *)malloc(sizeof(mydata));

	md.num = 123;
	strcpy(md.str, "abc");

	p->num = 321;
	strcpy(p->str, "ABC");

	printf("%d, %s\n", (*(&md)).num, (&md)->str);
	printf("%d, %s\n", (*p).num, p->str);

	changes(md);
	printf("%d, %s\n", (*(&md)).num, (&md)->str);
	changeall(&md);
	printf("%d, %s\n", (*(&md)).num, (&md)->str);

	free(p);
	system("pause");
}
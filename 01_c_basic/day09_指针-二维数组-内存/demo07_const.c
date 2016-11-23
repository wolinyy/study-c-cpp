#include<stdio.h>
#include<stdlib.h>

int  * const p1;		//地址只读
const int *p2;			//地址指向的值只读
int const * p3;			//地址指向的值只读
int  const * const p4;	//地址和指向的值都只读
const int * const p5;	//地址和指向的值都只读

void demo01()
{
	int x = 10;
	int y = 20;
	const int * const p1 = &x;
	//*左右都有const,不能改变指向。不能改变数据
	//int  const * const p2 ;	//p2”: 如果不是外部的，则必须初始化常量对象

	//*p1 = 10;  //error C2065: “p”: 未声明的标识符
	//p1 = &y;
}

void demo02()
{
	int num = 10;
	const int  cnum = 9;
	//int const *p;
	// const int *p;   等价的关系
	int * const p=&num;

	//const 在* 左边，数据不可以改，指向可以改
	//const在*右边，数据可以改，指向不可以改

	*p = 6;
//	p = &cnum;
}

void demo03()
{
	int num = 10;
	const int  cnum = 9;

	 int const *p;
	// const int *p;   等价的关系
	 //可以改变指向，不可以改变指向的数组
	p = &num;  
	p = &cnum;
	//*p = 7;
}
void demo04()
{
	int num = 10;
	const int  cnum = 9;

	const int *p;  
	//这个指针不能改变指向的数据
	//可以改变指向谁
	p = &num;  //p可以变化
	p = &cnum;
	//*p = 5;
}

void demo05()
{
   const int a = 10;	 //常量
   //a = 9;
}

void demo06()
{
	int num = 100;
	int const  *p = &num;
	//*p = 0;
	int *p1 = (int *)p;
	*p1 = 79;
	printf("%d", num);
}

void demo07()
{
	const int x = 5; //只能限制编译器不能直接修改
	int  *p = &x;
	*p = 3;
	printf("%d", x);//间接修改
}

void main()
{
	demo01();
	demo02();
	demo03();
	demo04();
	demo05();
	demo06();
	demo07();
	
	system("pause");
}
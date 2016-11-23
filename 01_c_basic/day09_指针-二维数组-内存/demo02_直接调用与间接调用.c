#include<stdio.h>
#include<stdlib.h>

void demo01()
{
	int num = 10;
	int *p = &num;
	printf("%d,%d", num, *p);
	num = 5; //直接访问
	printf("\n%d,%d", num, *p);
	*p = 9;	 //间接访问
	printf("\n%d,%d", num, *p);
}

void demo02()
{
	int num=10;
	int *p = NULL;
	printf("\n%d,%x", num, &num);	//直接调用
	
	*(&num) = 100; //*根据地址取出内容
	printf("\n%d,%x", num, &num);

	p = &num;//p是指针变量
	*p = 90;	//*p等价于num,
	printf("\n*p=%d,num=%d", *p, num);
}


void demo03()
{
	int num = 10;
	int *p = &num;
	printf("%d,%d", num, *p);//等价
	printf("\n%x,%x", p, &num);
	printf("\n%x", &p);//变量的地址
}

void demo04()
{
	int *p1;
	double *p2;
	char *p3;  //指针只是一个地址，大小是固定的，就是四个字节
	printf("%d,%d,%d,", sizeof(p1), sizeof(p2), sizeof(p3));
}

void demo05()
{
	int num = 100;
	int *p;	//error C4700: 使用了未初始化的局部变量“p”
	//在一些C++编译器，不检查变量是否初始化 ，指针使用之前必须初始化
	//p = &num;  //非法，可以编译，运行报错 ，会把100当作一个地址
	//printf("%d", *p);
	printf("\n%x", &p);//通过p的地址查看p
}

void  demo06()
{
	int numA = 100;
	int numB = 200;
	int *p = &numA;	 //p存储numA地址
	*p = 99; //*p=*(&numA)=99
	printf("\n%d", numA);
	p = &numB;	//p存储numB 地址
	*p = 199;  // *p=200=*(&numB)
	printf("\n%d", numB);
}

void main()
{
	demo01();
	demo02();
	demo03();
	demo04();
	demo05();
	demo06();

	system("pause");
}
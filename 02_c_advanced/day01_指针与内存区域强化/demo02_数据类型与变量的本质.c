#include "stdlib.h"
#include "string.h"
#include "stdio.h"

//数据类型可理解为创建变量的模具（模子）；是固定内存大小的别名。
//数据类型分为两种，一个是简单的数据类型，一个是复杂的数据类型。
//碰见复杂的数据类型不能用简单的数据类型的思维去思考它。
//变量的本质是申请分配固定大小的内存

typedef int u32 ;

struct Teacer
{
	char name[100];
	int age ;
};

typedef struct Teacer Teacer;

typedef struct _Teacer2
{
	char name[100];
	int age ;
}Teacer2;

void main(void)
{
	int b ; //告诉c编译器给我分配4个字节的内存

	int a[10];  //告诉c编译器给我分配40个字节的内存
	int *p1, p2;

	printf("&a:%d, a:%d \n" , &a, a);

	//同样的数字 +1 不一样 
	//数据类型不一样 
	// *(a + 1) => a[i]		=>		a + 1 => &a[i]
	printf("&a+1:%d, a+1:%d \n", &a +1 , a +1);

	printf("sizeof(int):%d\n", sizeof(int));

	printf("sizeof(int *):%d\n", sizeof(int *));

	printf("sizeof(u32):%d\n", sizeof(u32));

	printf("sizeof(Teacer):%d\n", sizeof(Teacer));

	printf("sizeof(Teacer2):%d\n", sizeof(Teacer2));

	/*
	数组类型，压死初学者的三座大山
		1、数组类型
		2、数组指针
		3、数组类型和数组指针的关系
	*/

	b = 10;	//直接修改
	printf("b=%d \n", b);
	*((int *)&b) = 20;	//间接修改
	printf("b=%d \n", b);

	system("pause");
}
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

//结构体的定义

//这个定义了一个数据类型，没有分配内存。 
////捆绑分配，捆绑释放
//内存四自己对齐
//用typedef重I命名
typedef struct _Teacher
{
	char name[62];
	char c;
	int age;
}Teacher ;

struct _Teacher2
{
	char name[62];
	char c;
	int age;
}t2, t3; //定义结构体变量的第二种方法

struct 
{
	char name[62];
	char c;
	int age;
}t4; //定义结构体变量的第3种方法

void demo01()
{
	 //第一种方法
	 Teacher t1; //告诉c++编译器分配内存 //在临时去

	 Teacher *p =( Teacher *) malloc(sizeof( Teacher));
	//捆绑分配，捆绑释放
	free(p);
	system("pause");
}

//形参是指针
void copyStruct(Teacher *to, Teacher *from)
{
	*to = *from;
}

//形参值拷贝
int copyStruct2(Teacher to, Teacher from)
{
	to = from;
	return 10;
}

void main()
{
	Teacher t1;

	Teacher t2;

	Teacher *p  = NULL;
	printf(" %d \n", sizeof( Teacher));
	p  = &t1;
	strcpy(t1.name, "name");
	t1.age  = 10; //通过.的方法来操作结构体的成员域
	p->age = 12; 
	p->age; // . ->的本质是寻址。。。。。寻每一个成员相对于大变量t1的内存偏移。。。。。。没有操作内存
	//所以这样写是没有问题的。

	t2 = t1; //编译器做了什么工作
	printf("t2.age:%d \n", t2.age);

	{
		Teacher t3;
		int a = 10;
		t3.age = a;
		copyStruct2(t3, t2);
		printf("t3.age: %d \n", t3.age);
		copyStruct(&t3, &t2);
		printf("t3.age: %d \n", t3.age);
	}

	system("pause");
}

/*
void main1()
{
	int **********       a = malloc(100);
	free(a);
}
*/
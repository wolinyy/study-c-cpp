#include <iostream>

using namespace std;

/*
C语言中的const变量
C语言中const变量是只读变量，有自己的存储空间
C++中的const常量
可能分配存储空间,也可能不分配存储空间  
当const常量为全局，并且需要在其它文件中使用
当使用&操作符取const常量的地址
*/

void demo01()
{
	/*
	//第一个第二个意思一样 代表一个常整形数
	//第三个 c是一个指向常整形数的指针(所指向的内存数据不能被修改，但是本身可以修改)
	//第四个 d 常指针（指针变量不能被修改，但是它所指向内存空间可以被修改）
	//第五个 e一个指向常整形的常指针（指针和它所指向的内存空间，均不能被修改）
	*/
	const int a = 0;
	int const b = 0;

	const int *c = 0;
	int *const d = NULL;
	const int * const e = NULL;
}

struct Teacher
{
	char name[32];
	int age;
};

void printTe(const Teacher *p)
{
	//const 修饰指针所指内存空间不能被修改
	//p->age = 10;
	p = NULL;
}

void printTe02(Teacher * const p)
{
	//const 修饰指针 p变量不能被修改
	p->age = 10;
	//p = NULL;
}

void printTe03(const Teacher * const p)
{
	//const 修饰指针 所指内存空间和p变量不能被修改
	//p->age = 10;		//由于正在通过常量对象访问“age”，因此无法对其进行修改
	//p = NULL;			//“p”: 不能给常量赋值
}

//c++里面，const不在是一个冒牌货
void main11()
{
	//c里面的const是一个冒牌货
	const int a = 10;
	//a = 11; 直接修改a不可以

	int *p = (int *)&a;
	*p = 11; //但是间接修改a可以
	printf("a: %d \n", a);
	
	//*p是10 。。。。说明p和&a绑定的很死。。。
	//*p是11.。。。。说明*p所指的内存空间和&a,不一样。。。
	printf("*p :%d\n", *p);

	printf("&a: %d \n", &a);
	printf("p: %d \n", p);

	/*
	a: 10
	*p :11
	&a: 3996196
	p: 3996196
	*/
}

void main70()
{
	int a = 10;
	const int b = 20;
	int c = 30;

	printf("&a:%d, &b:%d, &c:%d \n", &a, &b, &c);	
	//&a:3996196, &b:3996184, &c:3996172
}

int main73()
{
	const int a = 1;
	const int b = 2; //编译期间就已经把值定下啦
	int array[ a + b] = {0}; //
	int i = 0;

	for(i=0; i<(a+b); i++)
	{
		printf("array[%d] = %d\n", i, array[i]);
	}

	printf("Press enter to continue ...");

	return 0;
}

//1 a的作用域到什么地方
//2 const int b b的作用域到什么
//3 自定义#define作用域。。。。。
//4 按照条件卸载宏定义
void fun1()
{
#define c 10
#define a 10
	const int b = 20;
#undef  a
}

void fun2()
{
	printf("c = %d\n", c);
	//printf("a = %d\n", a);
	//printf("b = %d\n", b);
}

void main()
{
	main11();
	main70();
	main73();

	system("pause");
}
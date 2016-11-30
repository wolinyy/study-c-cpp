#include "iostream"
using namespace std;

//函数名称一样，但是参数数量不一样，类型不一样。。参数的顺序也不一样。。。
//函数重载。。
//函数返回值，不是判断函数重载的标准。。。
void myprint(int a)
{
	printf("a:%d \n", a);
}

void myprint(int a, char *p)
{
	printf("a:%d \n", a);
}

void myprint(char *p, int a)
{
	printf("a:%d \n", a);
}


void myprint(double a)
{
	printf("a:%d \n", a);
}

// int myprint(double a)
// {
// 	printf("a:%d \n", a);
// }

void main71()
{

	myprint(10);
	myprint(10,"ddddd");
	myprint("ddd",11);
	system("pause");
}

//当函数重载遇上默认函数参数 出现二义性问题

int func(int a, int b , int c= 0)
{
	printf("a:%d ", a);
	return 0;
}

int func(int a, int b)
{
	printf("a:%d ", a);
	return 0;
}

void main()
{
	int c = 0;
	//存在二义性，调用失败，编译不能通过
	//c = func(1, 2); //二义性，编译器区分不出来调用哪个。。。。	对重载函数的调用不明确
	c = func(1, 2, 3); //二义性，编译器区分不出来调用哪个。。。。
	system("pause");
}
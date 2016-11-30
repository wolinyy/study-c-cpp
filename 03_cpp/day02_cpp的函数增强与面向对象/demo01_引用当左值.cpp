#include "iostream"
using namespace std;


int getAA1()
{
	int a;
	a = 10;
	return a;
}

//基础类型a返回的时候，也会有一个副本
int& getAA2()
{
	int a;
	a = 10;
	return a;
}

int* getAA3()
{
	int a;
	a = 10;
	return &a;
}



void demo01()
{
	int a1 = 0;
	int a2 = 0;

	a1 = getAA1();
	a2 = getAA2();

	int &a3 = getAA2();

	printf("a1:%d \n", a1);
	printf("a2:%d \n", a2); 
	printf("a3:%d \n", a3); //乱码
}

//static修饰变量的时候，变量是一个状态变量
int j()
{
	static int a = 10;
	a ++;
	printf("a:%d \n", a);
	return a;

}

int& j1()
{
	static int a = 10;
	a ++;
	printf("a:%d \n", a);
	return a;
}

int *j2()
{
	static int a = 10;
	a ++;
	printf("a:%d \n", a);
	return &a;
}


void main()
{
	demo01();
	// j()的运算结果是一个数值，没有内存地址，不能当左值。。。。。
	//11 = 100;
	//*(a>b?&a:&b) = 111;
	//当被调用的函数当左值的时候，必须返回一个引用。。。。。
	//j() = 100;
	//j();
	j1() = 100;
	j1();
	*(j2()) = 200; //相当于我们程序员手工的打造 做左值的条件
	j2();
	system("pause");
}
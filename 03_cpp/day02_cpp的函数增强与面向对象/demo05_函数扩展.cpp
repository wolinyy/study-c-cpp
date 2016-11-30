#include "iostream"
using namespace std;

//默认参数
void printAB(int x = 3)
{
	printf("x:%d\n", x);
}

//在默认参数规则 ，如果默认参数出现，那么右边的都必须有默认参数
/*
void printABC(int a, int b, int x = 3, int y, int z)	//error C2548: “printABC”: 缺少参数 4 5 的默认参数
{

}
*/
void printABC(int a, int b, int x = 3, int y=4, int z = 5)
{
	printf("x:%d\n", x);
}

//占位参数
int func (int x, int y, int )
{
	return x + y;
}

int func2(int a, int b, int = 0)
{
	return a + b;
}


void main()
{

	printAB(2);
	printAB();
	//func(1, 2);		//“func”: 函数不接受 2 个参数
	func(1, 2, 3);

	//如果默认参数和占位参数在一起，都能调用起来。。。。
	func2(1, 2);
	func2(1, 2, 3);

	system("pause");
}
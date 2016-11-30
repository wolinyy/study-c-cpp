#include "iostream"
using namespace std;


//inline void printA();
//inline关键字必须和函数实现放在一块。。。
//inline是一个请求，告诉编译进行内联编译
inline void printA()
{
	printf("dddd");
}

void main51()
{
	printA(); 
	// 	{
	// 		printf("dddd");
	// 	}
	system("pause");
}


#define MYFUNC(a, b) ((a) < (b) ? (a) : (b))

inline int myfunc(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	int a = 1;
	int b = 3;
	//int c = myfunc(++a, b);
	//头疼兄弟 
	//不要让头疼兄弟来做函数参数。。。。。
	//带参数的宏和普通函数区别
	int c = MYFUNC(++a, b);  //((++a) < (b) ? (++a) : (b))

	printf("a = %d\n", a); //2  //3
	printf("b = %d\n", b); //3  //3
	printf("c = %d\n", c); //2  //3

	printf("Press enter to continue ...");
	system("pause");
	return 0;
}

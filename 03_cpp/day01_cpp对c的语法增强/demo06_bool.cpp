#include <iostream>

using namespace std;

/*
C++中的布尔类型
C++在C语言的基本类型系统之上增加了bool
C++中的bool可取的值只有true和false
理论上bool只占用一个字节，
如果多个bool变量定义在一起，可能会各占一个bit，这取决于编译器的实现

true代表真值，编译器内部用1来表示
false代表非真值，编译器内部用0来表示

bool类型只有true（非0）和false（0）两个值
C++编译器会在赋值时将非0值转换为true，0值转换为false
*/

struct A
{
	bool b1;
};

struct B
{
	int a;
	bool b1;
};

struct C
{
	int a;
	bool b1;
	int c;
};

struct D
{
	int a;
	bool b1;
	bool b2;
	bool b3;
	int c;
};

void main()
{
	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << sizeof(C) << endl;
	cout << sizeof(D) << endl;

	bool b1 = 10;
	cout << b1 << endl;
	cout << !b1 << endl;
	cout << !!b1 << endl;

	cout << !!200 << endl;

	system("pause");
}
#include <iostream>

using namespace std;

/*
1、引用是C++的概念，属于C++编译器对C的扩展
2、引用的本质
1）引用在C++中的内部实现是一个常指针
Type& name <==> Type* const name
2）C++编译器在编译过程中使用常指针作为引用的内部实现，因此引用所占用的空间大小与指针相同。
3）从使用的角度，引用会让人误会其只是一个别名，没有自己的存储空间。这是C++为了实用性而做出的细节隐藏

引用在实现上，只不过是把：
间接赋值成立的三个条件的后两步和二为一。
//当实参传给形参引用的时候，只不过是c++编译器帮我们程序员手工取了一个实参地址，传给了形参引用（常量指针）
引用当左值
*/

void demo01()
{
	int a = 10;
	int &b = a;
	b = 11;

	cout<<"b--->"<<a<<endl;
	printf("a:%d\n", a);
	printf("b:%d\n", b);
	printf("&a:%d\n", &a);
	printf("&b:%d\n", &b);  //请思考：对同一内存空间可以取好几个名字吗？指针
}

/*
1）引用作为其它变量的别名而存在，因此在一些场合可以代替指针
2）引用相对于指针来说具有更好的可读性和实用性
*/

int swap1(int &a, int &b)
{
	int t = a;
	a = b;
	b = t; 
	return 0;
}
int swap1(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
	return 0;
}

struct Teacer {
	int &a;
	int &b;
};

/*
Const&  相当于 const int * const e
普通引用 相当于 int *const e1
*/
void demo02()
{
	int a = 10;
	const int &b = a;
	//b = 11;		//“b”: 不能给常量赋值

	const int &c = 10;
	//int &d = 10;	//“初始化”: 无法从“int”转换为“int &”
}


int& j()
{
	static int a = 0;
	return a;
}

int& g()
{
	int a = 0;
	return a;
}

void main()
{
	demo01();
	printf("sizeof(Teacher) %d\n", sizeof(Teacer));

	int a = g();
	int& b = g();	//随机大值 &b常指针 指向地址已经销毁
	j() = 10;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	//printf("f() = %d\n", f());

	system("pause");
}
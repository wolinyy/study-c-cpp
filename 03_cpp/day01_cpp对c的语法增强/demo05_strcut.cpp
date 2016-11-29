#include <iostream>		//c++标准输入输出流

using namespace std;	//使用c++标准命名空间

/*
struct类型的加强：
C语言的struct定义了一组变量的集合，C编译器并不认为这是一种新的类型
C++中的struct是一个新类型的定义声明
*/
struct Circle
{
	double m_r;
	double m_s;

	void setR(double r)
	{
		m_r = r;
	}
	void prinfR()
	{
		printf("r:%d\n", m_r);
	}
	double getS()
	{
		m_s = 3.14 * m_r * m_r;
		return m_s;
	}

	//不访问成员变量的函数
	int test()
	{
		int i = 1;
		return 1;
	}
};

void demo03()
{
	Circle c1;
	double r = 0;
	cout << "请你输入圆的半径";
	cin>>r;

	c1.setR(r);
	cout << "圆的面积:"<< c1.getS() << endl;;

	// 数据类型的本质：固定大小内存块的别名 函数的大小不包含在数据类型中 编译器实现
	cout << "sizeof(Circle):"<< sizeof(Circle) << endl;;
	cout << "sizeof(c1):"<< sizeof(c1) << endl;

	Circle *pC = NULL;
	cout << pC->test() << endl;
}

void main()
{
	demo03();

	system("pause");
}
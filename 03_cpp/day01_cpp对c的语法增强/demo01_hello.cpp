#include <iostream>		//c++标准输入输出流

using namespace std;	//使用c++标准命名空间

//C++标准输入输出测试
void demo01()
{
	// c++编译对<<左移符号进行了功能增强--操作符重载
	cout << "c++ hello" << endl;

	//变量使用时声明
	int i = 0;
	cin >> i;	//从键盘输入数据到变量中

	cout << "你输入的i是" << i << endl;

}

void demo02()
{
	double r = 0;
	double s = 0;
	cout << "请你输入圆的半径:";
	cin >> r;

	s = 3.14 * r * r;
	cout << "圆的面积是" << s << endl;

}

//相当于对圆进行了一个类型抽象
//数据类型的本质：固定大小内存块的别名
//在结构体里面可以封装属性和函数
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
	//demo01();
	//demo02();
	demo03();

	system("pause");
}
#include "iostream"
using namespace std;

class Test
{
public:
	//构造函数 无参构造函数 默认构造函数
	//
	Test()
	{
		a = 10;
	}

	//带参数的构造函数
	//调用方法3中
	Test(int mya)
	{
		a = mya;
	}

	//第三中初始化对象的方法
	//赋值构造函数 copy构造函数
	//copy构造函数的用法 4中应用场景
	Test(const Test & obj)
	{
		;
	}

protected:
private:
	int a;
};
void main()
{
	//1 （）
	Test t1(10); //c++默认调用有参构造函数 自动调用
	// =
	Test t2 = 11; //c++默认调用有参构造函数自动调用

	//手工调
	Test t3 = Test(12); //我们程序员手动调用构造函数


	system("pause");
}
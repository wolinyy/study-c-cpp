#include "iostream"
using namespace std;

class MyTest
{
public:
	MyTest(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		cout<<"MyTest 3" <<endl;
	}

	MyTest(int a, int b)
	{
		this->a = a;
		this->b = b;

		cout<<"MyTest 2" <<endl;
		MyTest(a, b, 100); //匿名临时对象 函数结束就析构
	}
	~MyTest()
	{
		printf("MyTest~:%d, %d, %d\n", a, b, c);
	}

protected:
private:
	int a;
	int b;
	int c;

public:
	int getC() const { return c; }
	void setC(int val) { c = val; }
};

int main()
{
	MyTest t1(1, 2);
	printf("c:%d", t1.getC()); //请问c的值是？ 乱值
	system("pause");
	return 0;
}
#include "iostream"
using namespace std;


void main41()
{
	int a = 10;

	const int &b = a;

	a = 11;

	//b = 12; //通过引用修改a,对不起修改不了

	system("pause");
}


struct Teacher1
{
	char name[64];
	int age;
};

void printTe2(const Teacher1 *const pt)
{

}

//const引用让变量(所指内存空间)拥有只读属性
void printTe(const Teacher1 &t)
{
	//t.age  = 11;
}
void main42()
{
	Teacher1 t1;
	t1.age = 33;
	printTe(t1);
	system("pause");
}


struct AdvTeacher
{
	int &a;
	int &b;
	int c ;
};

void main()
{
	const int b = 10;
	printf("b:%d", &b);

	// int &a1 = 19; 如果不加const编译失败
	const int &a = 19;
	printf("&a:%d \n", &a);

	system("pause");
}
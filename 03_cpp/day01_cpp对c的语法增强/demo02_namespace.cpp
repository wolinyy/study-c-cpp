#include "iostream"

using namespace std;

/*
命名空间将全局作用域分成不同的部分
不同命名空间中的标识符可以同名而不会发生冲突
命名空间可以相互嵌套
全局作用域也叫默认命名空间
*/

namespace NameSpaceA
{
	int a = 0;
}

namespace NameSpaceB
{
	int a = 1;

	namespace NameSpaceC
	{
		struct Teacher
		{
			char name[10];
			int age;
		};

	}
}

int main()
{
	using namespace NameSpaceA;
	using NameSpaceB::NameSpaceC::Teacher;

	printf("a = %d\n", a);
	printf("a = %d\n", NameSpaceB::a);

	Teacher t1 = {"aaa", 3};
	printf("t1.name = %s\n", t1.name);
	printf("t1.age = %d\n", t1.age);


	system("pause");
	return 0;
}
#include "iostream"
using namespace std;

struct Teacher
{
	char name[64];
	int age;
};

int getTe(Teacher **myp)
{
	Teacher *p = (Teacher *)malloc(sizeof(Teacher));

	if (p ==NULL)
	{
		return -1;
	}
	memset(p, 0, sizeof(Teacher));
	p->age = 33;

	*myp  = p; //

	return 0;
}

//指针的引用而已
int getTe(Teacher*  &myp)
{
	myp = (Teacher *)malloc(sizeof(Teacher));
	myp->age = 34;

	return 0;
}

void main()
{
	Teacher *p = NULL;
	getTe(&p);
	getTe(p);

	printf("age:%d \n", p->age);
	system("pause");
}
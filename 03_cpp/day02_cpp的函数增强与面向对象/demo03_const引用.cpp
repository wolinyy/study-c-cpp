#include "iostream"
using namespace std;


void main41()
{
	int a = 10;

	const int &b = a;

	a = 11;

	//b = 12; //ͨ�������޸�a,�Բ����޸Ĳ���

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

//const�����ñ���(��ָ�ڴ�ռ�)ӵ��ֻ������
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

	// int &a1 = 19; �������const����ʧ��
	const int &a = 19;
	printf("&a:%d \n", &a);

	system("pause");
}
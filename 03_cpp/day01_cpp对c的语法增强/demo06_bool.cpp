#include <iostream>

using namespace std;

/*
C++�еĲ�������
C++��C���ԵĻ�������ϵͳ֮��������bool
C++�е�bool��ȡ��ֵֻ��true��false
������boolֻռ��һ���ֽڣ�
������bool����������һ�𣬿��ܻ��ռһ��bit����ȡ���ڱ�������ʵ��

true������ֵ���������ڲ���1����ʾ
false�������ֵ���������ڲ���0����ʾ

bool����ֻ��true����0����false��0������ֵ
C++���������ڸ�ֵʱ����0ֵת��Ϊtrue��0ֵת��Ϊfalse
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
#include <iostream>

using namespace std;

/*
1��������C++�ĸ������C++��������C����չ
2�����õı���
1��������C++�е��ڲ�ʵ����һ����ָ��
Type& name <==> Type* const name
2��C++�������ڱ��������ʹ�ó�ָ����Ϊ���õ��ڲ�ʵ�֣����������ռ�õĿռ��С��ָ����ͬ��
3����ʹ�õĽǶȣ����û����������ֻ��һ��������û���Լ��Ĵ洢�ռ䡣����C++Ϊ��ʵ���Զ�������ϸ������

������ʵ���ϣ�ֻ�����ǰѣ�
��Ӹ�ֵ���������������ĺ������Ͷ�Ϊһ��
//��ʵ�δ����β����õ�ʱ��ֻ������c++�����������ǳ���Ա�ֹ�ȡ��һ��ʵ�ε�ַ���������β����ã�����ָ�룩
���õ���ֵ
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
	printf("&b:%d\n", &b);  //��˼������ͬһ�ڴ�ռ����ȡ�ü���������ָ��
}

/*
1��������Ϊ���������ı��������ڣ������һЩ���Ͽ��Դ���ָ��
2�����������ָ����˵���и��õĿɶ��Ժ�ʵ����
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
Const&  �൱�� const int * const e
��ͨ���� �൱�� int *const e1
*/
void demo02()
{
	int a = 10;
	const int &b = a;
	//b = 11;		//��b��: ���ܸ�������ֵ

	const int &c = 10;
	//int &d = 10;	//����ʼ����: �޷��ӡ�int��ת��Ϊ��int &��
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
	int& b = g();	//�����ֵ &b��ָ�� ָ���ַ�Ѿ�����
	j() = 10;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	//printf("f() = %d\n", f());

	system("pause");
}
#include "iostream"
using namespace std;


int getAA1()
{
	int a;
	a = 10;
	return a;
}

//��������a���ص�ʱ��Ҳ����һ������
int& getAA2()
{
	int a;
	a = 10;
	return a;
}

int* getAA3()
{
	int a;
	a = 10;
	return &a;
}



void demo01()
{
	int a1 = 0;
	int a2 = 0;

	a1 = getAA1();
	a2 = getAA2();

	int &a3 = getAA2();

	printf("a1:%d \n", a1);
	printf("a2:%d \n", a2); 
	printf("a3:%d \n", a3); //����
}

//static���α�����ʱ�򣬱�����һ��״̬����
int j()
{
	static int a = 10;
	a ++;
	printf("a:%d \n", a);
	return a;

}

int& j1()
{
	static int a = 10;
	a ++;
	printf("a:%d \n", a);
	return a;
}

int *j2()
{
	static int a = 10;
	a ++;
	printf("a:%d \n", a);
	return &a;
}


void main()
{
	demo01();
	// j()����������һ����ֵ��û���ڴ��ַ�����ܵ���ֵ����������
	//11 = 100;
	//*(a>b?&a:&b) = 111;
	//�������õĺ�������ֵ��ʱ�򣬱��뷵��һ�����á���������
	//j() = 100;
	//j();
	j1() = 100;
	j1();
	*(j2()) = 200; //�൱�����ǳ���Ա�ֹ��Ĵ��� ����ֵ������
	j2();
	system("pause");
}
#include "iostream"
using namespace std;

//Ĭ�ϲ���
void printAB(int x = 3)
{
	printf("x:%d\n", x);
}

//��Ĭ�ϲ������� �����Ĭ�ϲ������֣���ô�ұߵĶ�������Ĭ�ϲ���
/*
void printABC(int a, int b, int x = 3, int y, int z)	//error C2548: ��printABC��: ȱ�ٲ��� 4 5 ��Ĭ�ϲ���
{

}
*/
void printABC(int a, int b, int x = 3, int y=4, int z = 5)
{
	printf("x:%d\n", x);
}

//ռλ����
int func (int x, int y, int )
{
	return x + y;
}

int func2(int a, int b, int = 0)
{
	return a + b;
}


void main()
{

	printAB(2);
	printAB();
	//func(1, 2);		//��func��: ���������� 2 ������
	func(1, 2, 3);

	//���Ĭ�ϲ�����ռλ������һ�𣬶��ܵ���������������
	func2(1, 2);
	func2(1, 2, 3);

	system("pause");
}
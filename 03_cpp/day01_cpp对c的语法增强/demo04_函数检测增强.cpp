#include "iostream"  //����c++��׼ͷ�ļ�

using namespace std; //ʹ��c++��׼�����ռ� ����ı�׼�Ķ���

/*
��C������
	int f(    )����ʾ����ֵΪint��������������ĺ���
	int f(void)����ʾ����ֵΪint���޲κ���
	��C++��
	int f(  );��int f(void)������ͬ�����壬����ʾ����ֵΪint���޲κ���
	c++ ����ֵ�����ǿ
*/



void f(int i)
{
	printf("i:%d \n", i);
}

void g()
{
printf("g()\n");
//return 1;
return;
}


/*
int main(int argc, char *argv[])
{

	f(10);

	printf("g() = %d\n", g(1, 2, 3, 4, 5));


	getchar();	
	return 0;
}
*/

//ע����c++��return����ֵ��ϸ��
int getA()
{
	printf("aaaaaaa");
	
	return 10;
}

int main()
{
	f(100);
	//g(1,2,3);
	system("pause");

}



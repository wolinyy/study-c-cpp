#include "iostream"
using namespace std;


//inline void printA();
//inline�ؼ��ֱ���ͺ���ʵ�ַ���һ�顣����
//inline��һ�����󣬸��߱��������������
inline void printA()
{
	printf("dddd");
}

void main51()
{
	printA(); 
	// 	{
	// 		printf("dddd");
	// 	}
	system("pause");
}


#define MYFUNC(a, b) ((a) < (b) ? (a) : (b))

inline int myfunc(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	int a = 1;
	int b = 3;
	//int c = myfunc(++a, b);
	//ͷ���ֵ� 
	//��Ҫ��ͷ���ֵ�����������������������
	//�������ĺ����ͨ��������
	int c = MYFUNC(++a, b);  //((++a) < (b) ? (++a) : (b))

	printf("a = %d\n", a); //2  //3
	printf("b = %d\n", b); //3  //3
	printf("c = %d\n", c); //2  //3

	printf("Press enter to continue ...");
	system("pause");
	return 0;
}

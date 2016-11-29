#include <iostream>

using namespace std;

/*
C�����е�const����
C������const������ֻ�����������Լ��Ĵ洢�ռ�
C++�е�const����
���ܷ���洢�ռ�,Ҳ���ܲ�����洢�ռ�  
��const����Ϊȫ�֣�������Ҫ�������ļ���ʹ��
��ʹ��&������ȡconst�����ĵ�ַ
*/

void demo01()
{
	/*
	//��һ���ڶ�����˼һ�� ����һ����������
	//������ c��һ��ָ����������ָ��(��ָ����ڴ����ݲ��ܱ��޸ģ����Ǳ�������޸�)
	//���ĸ� d ��ָ�루ָ��������ܱ��޸ģ���������ָ���ڴ�ռ���Ա��޸ģ�
	//����� eһ��ָ�����εĳ�ָ�루ָ�������ָ����ڴ�ռ䣬�����ܱ��޸ģ�
	*/
	const int a = 0;
	int const b = 0;

	const int *c = 0;
	int *const d = NULL;
	const int * const e = NULL;
}

struct Teacher
{
	char name[32];
	int age;
};

void printTe(const Teacher *p)
{
	//const ����ָ����ָ�ڴ�ռ䲻�ܱ��޸�
	//p->age = 10;
	p = NULL;
}

void printTe02(Teacher * const p)
{
	//const ����ָ�� p�������ܱ��޸�
	p->age = 10;
	//p = NULL;
}

void printTe03(const Teacher * const p)
{
	//const ����ָ�� ��ָ�ڴ�ռ��p�������ܱ��޸�
	//p->age = 10;		//��������ͨ������������ʡ�age��������޷���������޸�
	//p = NULL;			//��p��: ���ܸ�������ֵ
}

//c++���棬const������һ��ð�ƻ�
void main11()
{
	//c�����const��һ��ð�ƻ�
	const int a = 10;
	//a = 11; ֱ���޸�a������

	int *p = (int *)&a;
	*p = 11; //���Ǽ���޸�a����
	printf("a: %d \n", a);
	
	//*p��10 ��������˵��p��&a�󶨵ĺ���������
	//*p��11.��������˵��*p��ָ���ڴ�ռ��&a,��һ��������
	printf("*p :%d\n", *p);

	printf("&a: %d \n", &a);
	printf("p: %d \n", p);

	/*
	a: 10
	*p :11
	&a: 3996196
	p: 3996196
	*/
}

void main70()
{
	int a = 10;
	const int b = 20;
	int c = 30;

	printf("&a:%d, &b:%d, &c:%d \n", &a, &b, &c);	
	//&a:3996196, &b:3996184, &c:3996172
}

int main73()
{
	const int a = 1;
	const int b = 2; //�����ڼ���Ѿ���ֵ������
	int array[ a + b] = {0}; //
	int i = 0;

	for(i=0; i<(a+b); i++)
	{
		printf("array[%d] = %d\n", i, array[i]);
	}

	printf("Press enter to continue ...");

	return 0;
}

//1 a��������ʲô�ط�
//2 const int b b��������ʲô
//3 �Զ���#define�����򡣡�������
//4 ��������ж�غ궨��
void fun1()
{
#define c 10
#define a 10
	const int b = 20;
#undef  a
}

void fun2()
{
	printf("c = %d\n", c);
	//printf("a = %d\n", a);
	//printf("b = %d\n", b);
}

void main()
{
	main11();
	main70();
	main73();

	system("pause");
}
#include<stdio.h>
#include<stdlib.h>

void demo01()
{
	int a = 3;
	int b = 0;

	printf("&a = %p\n", &a);
	printf("&b = %p\n", &b);
	printf("&a-&b = %d\n", &a-&b);
}


 //a[10]
// a ,&a���洢��������׵�ַ	 a�ȼ���&a[0],
// a��һ��int��Ԫ�أ�&aһ��int�����Ԫ��
//a+1, &a+1	 ,///&(a+1)	 �ڴ�ʵ��������ڴ�ʵ����е�ַ
void demo02()
{
	//error C2078: ��ʼֵ�趨��̫��
	int a[5] = { 1, 2, 3, 4, 5 };
	int *p;
	 // a��һ��Ԫ�ص��׵�ַ��&a��һ������ĵ�ַ
	for (p = a; p < a + 5;p++)
	{
		printf("\n%d,%x", *p, p);
	}
}

void demo03()
{
	int a[10] = { 1, 2, 3, 4, 5, 6 };
	printf("\n%x", a);  //a������ʱ��ͻ����Ϊ&a ,C����
	printf("\n%x", &a);	//a,&a ����������׵�ַ
}

void main()
{
	demo01();
	demo02();
	demo03();

	system("pause");
}
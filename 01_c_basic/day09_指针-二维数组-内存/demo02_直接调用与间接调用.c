#include<stdio.h>
#include<stdlib.h>

void demo01()
{
	int num = 10;
	int *p = &num;
	printf("%d,%d", num, *p);
	num = 5; //ֱ�ӷ���
	printf("\n%d,%d", num, *p);
	*p = 9;	 //��ӷ���
	printf("\n%d,%d", num, *p);
}

void demo02()
{
	int num=10;
	int *p = NULL;
	printf("\n%d,%x", num, &num);	//ֱ�ӵ���
	
	*(&num) = 100; //*���ݵ�ַȡ������
	printf("\n%d,%x", num, &num);

	p = &num;//p��ָ�����
	*p = 90;	//*p�ȼ���num,
	printf("\n*p=%d,num=%d", *p, num);
}


void demo03()
{
	int num = 10;
	int *p = &num;
	printf("%d,%d", num, *p);//�ȼ�
	printf("\n%x,%x", p, &num);
	printf("\n%x", &p);//�����ĵ�ַ
}

void demo04()
{
	int *p1;
	double *p2;
	char *p3;  //ָ��ֻ��һ����ַ����С�ǹ̶��ģ������ĸ��ֽ�
	printf("%d,%d,%d,", sizeof(p1), sizeof(p2), sizeof(p3));
}

void demo05()
{
	int num = 100;
	int *p;	//error C4700: ʹ����δ��ʼ���ľֲ�������p��
	//��һЩC++�����������������Ƿ��ʼ�� ��ָ��ʹ��֮ǰ�����ʼ��
	//p = &num;  //�Ƿ������Ա��룬���б��� �����100����һ����ַ
	//printf("%d", *p);
	printf("\n%x", &p);//ͨ��p�ĵ�ַ�鿴p
}

void  demo06()
{
	int numA = 100;
	int numB = 200;
	int *p = &numA;	 //p�洢numA��ַ
	*p = 99; //*p=*(&numA)=99
	printf("\n%d", numA);
	p = &numB;	//p�洢numB ��ַ
	*p = 199;  // *p=200=*(&numB)
	printf("\n%d", numB);
}

void main()
{
	demo01();
	demo02();
	demo03();
	demo04();
	demo05();
	demo06();

	system("pause");
}
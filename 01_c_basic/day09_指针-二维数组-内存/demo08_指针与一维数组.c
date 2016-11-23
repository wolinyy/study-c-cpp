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
// a ,&a都存储了数组的首地址	 a等价于&a[0],
// a是一个int的元素，&a一个int数组的元素
//a+1, &a+1	 ,///&(a+1)	 内存实体就是有内存实体才有地址
void demo02()
{
	//error C2078: 初始值设定项太多
	int a[5] = { 1, 2, 3, 4, 5 };
	int *p;
	 // a是一个元素的首地址，&a是一个数组的地址
	for (p = a; p < a + 5;p++)
	{
		printf("\n%d,%x", *p, p);
	}
}

void demo03()
{
	int a[10] = { 1, 2, 3, 4, 5, 6 };
	printf("\n%x", a);  //a解析的时候就会解析为&a ,C语言
	printf("\n%x", &a);	//a,&a 都是数组的首地址
}

void main()
{
	demo01();
	demo02();
	demo03();

	system("pause");
}
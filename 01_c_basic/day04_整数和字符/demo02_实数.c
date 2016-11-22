#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<float.h>

void demo01()
{
	float fl = 10.45;//赋值号会自动转换
	double db = 29.87;
	printf("\n长度是%f，宽度是%f", fl, db);
	printf("\n%d,%d", sizeof(fl), sizeof(db));
	printf("\n%d,%d", sizeof(3.14), sizeof(3.14f));
	printf("\n%d,%d,", sizeof(10.45), sizeof(fl));
}

void demo02()
{
	printf("\n有%f元", 120000000.);	//小数点可以省略
	printf("\n有%d元", 120000000.);	// 0 元

	printf("\n有%f元", 1.2e8);//1.2*10^8
	printf("\n有%f元", 1.2e4); //指数必须为整数
}

void demo03()
{
	printf("\n%.10f", 1.2);  //小数点后面保留10位
	printf("\n%d,%d", sizeof(float), sizeof(double));
	printf("\n%f,%.10f", FLT_MAX, FLT_MIN);
	printf("\n%d,%d", INT_MAX, INT_MIN);
	printf("\n%f,%.5f", DBL_MAX, DBL_MIN);
}

void demo04()
{
	int num = 3.5;	//num=3,
	printf("%d,%f", num, num);
	printf("\n%d", (int)3.5);
	printf("\n%f", (float)6);
}

void main()
{
	demo01();
	demo02();
	demo03();
	demo04();

	getchar();
}
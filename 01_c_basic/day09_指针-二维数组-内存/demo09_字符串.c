#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char str[10] = "tasklist";//变量可以修改
	char *p = "calc";  //常量不能修改
	char *p1 = str;

	//定义一个字符串常量，将首地址传递给p
	printf("%d,%d\n", sizeof(p), sizeof("calc"));

	//*p = 'l';	//编译不报错，运行时异常
	*p1 = 'l';

	printf("%s\t%s\n", p,p1);
	system("pause");
}
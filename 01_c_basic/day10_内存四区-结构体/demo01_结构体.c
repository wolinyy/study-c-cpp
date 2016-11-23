#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//nameinfo类型名
struct nameinfo	   //struct不可以省略
{
	char name[50];
	char phone[50];
	int num;
};

struct    //无名结构体
{
	char name[50];
	char phone[50];
	int num;
};		  //不能引用没有任何意义

struct    //无名结构体
{
	char name[50];
	char phone[50];
	int num;
} a1,a2,a3 = {"name", "phone", 123};	 //限量版

void main()
{
	struct nameinfo     myinfo;//创建一个变量  int a;
	myinfo.num = 100;	//通过.访问结构体成员
	printf("结构体的编号是%d", myinfo.num);
	//myinfo.name = "ABC";	字符串不可以赋值号赋值
	//初始化字符串，第一种sprintf(stdio),第二种strcpy (string)
	sprintf(myinfo.name, "wolin");
	strcpy(myinfo.phone, "12345678901");

	printf("\nname=%s,",myinfo.name);
	printf("\n phone=%s", myinfo.phone);
	printf("\nname=%s,",a3.name);
	printf("\n phone=%s", a3.phone);

	system("pause");
}
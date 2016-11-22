#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
auto 局部变量（自动储存）
break无条件退出程序最内层循环
case   switch语句中选择项
char单字节整型数据
const定义不可更改的常量值
continue中断本次循环，并转向下一次循环
default switch语句中的默认选择项
do  用于构成do.....while循环语句
double定义双精度浮点型数据
else构成if.....else选择程序结构
enum枚举
extern在其它程序模块中说明了全局变量
float定义单精度浮点型数据
for构成for循环语句
goto构成goto转移结构
if构成if....else选择结构
int基本整型数据
long长整型数据
registerCPU内部寄存的变量
return用于返回函数的返回值
short短整型数据
signed有符号数
sizoef计算表达式或数据类型的占用字节数
static定义静态变量
struct定义结构类型数据
switch构成switch选择结构
typedef重新定义数据类型
union联合类型数据
unsigned定义无符号数据
void定义无类型数据
volatile该变量在程序中执行中可被隐含地改变
while用于构成do...while或while循环结构
*/

typedef struct _st
{
	int a;
	char c;
}st;

typedef union _un
{
	int a;
	char c;
}un;

typedef enum _em
{
	RED=10,
	BLUE,
	GREEN,
	BLACK=20,
	WHITE,
	GRAY
}em;

void demo01()
{
	char c = 'a';
	short s = 20;
	signed int a = -1;
	unsigned int ua = -1;
	long l = 100;
	float f = 3.2;
	double d = 4.2;

	em ea = GRAY;

	printf("sizeof(char)=\t%d\n", sizeof(char));
	printf("sizeof(short)=\t%d\n", sizeof(short));
	printf("sizeof(signed int)=\t%d\n", sizeof(signed int));
	printf("sizeof(unsigned int)=\t%d\n", sizeof(unsigned int));
	printf("sizeof(long)=\t%d\n", sizeof(long));
	printf("sizeof(float)=\t%d\n", sizeof(float));
	printf("sizeof(double)=\t%d\n", sizeof(double));
	printf("sizeof(st)=\t%d\n", sizeof(st));
	printf("sizeof(un)=\t%d\n", sizeof(un));
	printf("sizeof(em)=\t%d\n", sizeof(em));

	printf("a=%d, ua=%u\n", a, ua);

	printf("ea=%d\n", ea);
}

int demo02()
{
	un a;
	a.a = 0x01020304;
	printf("a.c = %d\n", a.c);

	if(0x01 == a.c){
		printf("big ending");
	}else if(0x04 == a.c){
		printf("little ending");
	}
	printf("\n");
	return 0;
}

int e;

/*
	volatile提醒编译器它后面所定义的变量随时都有可能改变，
	因此编译后的程序每次需要存储或读取这个变量的时候，都会直接从变量地址中读取数据。
	如果没有volatile关键字，则编译器可能优化读取和存储，可能暂时使用寄存器中的值

	C语言中提供了存储说明符auto，register，extern，static说明的四种存储类别。
	四种存储类别说明符有两种存储期：自动存储期和静态存储期。
	其中auto和register对应自动存储期。具有自动存储期的变量在进入声明该变量的程序块是被建立，
	它在该程序块活动时存在，退出该程序块时撤销。
*/
void demo03()
{
	auto int a = 10;
	register int r = 20;
	volatile int v = 30;
	static s = 40;

	extern int e;
	e = 40;

	a++,r++,v++,s++,e++;
	printf("%x\t%d\n", &a, a);
	//printf("%x\n", &r);	//error C2103: 寄存器变量上的“&”
	printf("%x\t%d\n", &v, v);
	printf("%x\t%d\n", &e, e);
	printf("%x\t%d\n", &s, s);
}

void main()
{
	demo01();
	demo02();
	demo03();
	demo03();

	system("pause");
}
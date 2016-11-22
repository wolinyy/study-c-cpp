#include <stdio.h>

#define X 100
#define 主函数 main
#define 打印 printf

void 常量()
{
	//X = 5;		//error C2106: “=”: 左操作数必须为左值

	const int a = 20;
	//a = 12;		//error C2166: 左值指定 const 对象
	打印("hello world X=%d, a=%d \n", X, a);
}

void 变量定义()
{
	int a, b, c;

	//类型名　　变量名，变量名，...，变量名;

	int A;
	int B;
	int C,D;
	printf("%x,%x,%x,%x,%x,%x\n", &a, &b, &c, &A, &B, &C);

	//printf("%d", E);	 //错误	1	error C2065: “E”: 未声明的标识符
}

void 变量加法()
{
	int a = 10;
	int b = 5;
	int c = 0;

	_asm				//_asm汇编语言
	{
		mov eax,a	//	  将a的值赋值给eax这个寄存器
		add eax,b		 //eax的值加b
		mov  c,eax		  //eax赋值给c
	}

	printf("a=%d,b=%d,c=%d\n", a , b, c);
}

void 变量初始化()
{
	int num;
	printf("%x\n", &num);
	printf("%d\n", num);	//不初始化，值未知
}

void 主函数()
{
	变量初始化();

	常量();
	变量定义();
	变量加法();

	system("pause");
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	转义字符 	意义 									ASCII码值（十进制）
	\a 			响铃(BEL) 								007
	\b 			退格(BS) ，将当前位置移到前一列 		008
	\f 			换页(FF)，将当前位置移到下页开头 		012
	\n 			换行(LF) ，将当前位置移到下一行开头 	010
	\r 			回车(CR) ，将当前位置移到本行开头 		013
	\t 			水平制表(HT) （跳到下一个TAB位置） 		009
	\v 			垂直制表(VT) 							011
	\\ 			表一个反斜线字符''\' 					092
	\' 			代表一个单引号 							039
	\" 			代表一个双引号字符 						034
	\? 			代表一个问 								063
	\0 			空字符(NULL) 							000

	\ooo		1到3位八进制数所代表的任意字符 			三位八进制
	\xhh 		1到2位十六进制所代表的任意字符 			二位十六进制
*/

void Escape_Character()
{
	char *p = "\a\b\f\n\r\t\v\\\'\"\?\011\x0a\0abc";	// \0结束字符，后面的不算长度
	printf("strlen:%d\n", strlen(p));

	while(*p)
	{
		printf("<%c\t%d>\n", *p, *p);
		p++;
	}
}

void demo01()
{
	printf("hello\f gogogo\v");	//在黑窗口命令行模式下， \v是一个垃圾字符

	getchar();
}

void demo02()
{
	printf("hello gogogo\r");	//让光标回到开头
	getchar();

}

void demo03()	  
{
	printf("\\n\\n");  //  //转换为1个/
	getchar();
}

void demo04()
{
	printf("Google");
	printf("\t");//制表符，两个空格
	printf("Google");
	getchar();
}

void demo05()
{
	printf("Google");
	printf("\b"); //退格
	getchar();
}

void main()
{
	Escape_Character();

	demo01();
	demo02();
	demo03();
	demo04();
	demo05();

	system("pause");
}
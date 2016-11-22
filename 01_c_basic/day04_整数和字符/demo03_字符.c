#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void demo01()
{
	char c = getchar();	//等待你输入一个字符
	putchar(c);	//输出一个字符

	putchar('\n');
}

void demo02()
{
	ShellExecuteA(0, "open", "mspaint", 0, 0, 0);
	//0起到隐藏窗口
	//1正常
	//3最小化
	//6最大化
	Sleep(1000);
}

void demo03()
{
	while (-1)
	{
		char str[50];
		gets(str);
		puts(str);
		system(str);
		if(0 == strcmp(str, "exit")){
			break;
		}
	}
}

void demo04()
{
	char str[20] ;
	char c1 = 'n';
	char c2 = 'o';
	char c3 = 't';
	char c4 = 'e';
	char c5 = 'p';
	char c6 = 'a';
	char c7 = 'd';
	sprintf(str, "%c%c%c%c%c%c%c", c1, c2, c3, c4, c5, c6, c7);
	printf("%s\n", str);

	sprintf(str, "%c%c%c%c%c%c%c", c1+1, c2+2, c3+3, c4+4, c5+5, c6+6, c7+7);
	printf("%s\n", str);
}

void main()
{
	demo01();
	demo02();
	demo03();
	demo04();

	system("pause");
}
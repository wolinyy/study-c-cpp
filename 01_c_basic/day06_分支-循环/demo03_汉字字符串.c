#include<stdio.h>

void demo01()
{
	wchar_t wstr[10] = L"我们";  //当前操作系统版本  ，语言
	char   str[10] = "我们";	//汉字占两个字节

	wprintf(L"%ws", wstr);	//国际化，软件，英文界面，日文界面，
	printf("%s", str);
}

void demo02()
{
	wchar_t ch = L'a';	//宽字符占两个字节
	char cha = 'a';

	printf("\n%d, %d", sizeof(ch), sizeof(cha));
	printf("\n%c", cha);
	//wprintf("\n%wc", ch);
}

void demo03()
{
	printf("\n%s", "天朝");
	printf("\n%d", sizeof("天"));
	printf("\n%d", sizeof("天朝"));
}

void main()
{
	demo01();
	demo02();
	demo03();

	getchar();
}
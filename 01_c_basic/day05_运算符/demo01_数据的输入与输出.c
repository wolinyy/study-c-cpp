#include<stdio.h>
#include<stdlib.h>

void demo01()
{
	int x;
	char c;
	char buf[32];
	printf("请输入整数：");
	scanf("%d", &x);
	printf("\n您输入的整数为: %d\n", x);

	getchar();

	printf("请输入字符：");
	scanf("%c", &c);
	printf("\n您输入的字符为: %c\n", c);

	getchar();

	printf("请输入字符串：");
	scanf("%s", buf);
	printf("\n您输入的字符串为: %s\n", buf);

	getchar();
}

void demo02()
{
	char ch = getchar();
	printf("%4c\n", ch);
}

void demo03()
{
	int x;
	char str[30];

	printf("%d\n", 1234);
	printf("%10d\n", 1234);//10大于宽度4，左边填空了6个空字符
	scanf("%d", &x);
	sprintf(str, "color%4d", x);  //%4d自动提供空格
	system(str);
}

void main()
{
	demo01();
	demo02();
	demo03();

	system("pause");
}
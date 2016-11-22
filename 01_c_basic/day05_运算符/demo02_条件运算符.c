#include<stdio.h>
#include<stdlib.h>

void demo01()
{
	int a = 3, b = 3;
	a++ > b++ ? printf("1") : a>b?printf("2"):printf("3");
	printf("\n");
}

void demo02()
{
	//加密主函数
	char str[13] = "i love china"; //创建一个字符串数组
	int i = 0;

	printf("%s\n", str);  //打印字符串
	while (i < 13)	//从0循环到13
	{
		str[i] != '\0' ? str[i] += i : 1; //判断字符有没有结束。
		i++;
	}
	printf("%s\n", str);
	//解密主函数
	{
		int i = 0;
		while (i < 13)
		{
			str[i] != '\0' ? str[i] -= i : 1;  //判断字符有没有结束。
			i++;
		}
		printf("%s\n", str);
	}
}

void main()
{
	demo01();
	demo02();

	system("pause");
}
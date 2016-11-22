#define _CRT_SECURE_NO_WARNINGS //关闭安全检查

#include<stdio.h>
#include<stdlib.h>

int  whilenum(int num)
{
    //12345 1234  123 12 1 0
	int  i = 0;
	while (num) //num==0循环终止
	{
		num /= 10;	//不断除以10
		i++;		//除一次，计数一次
	}
	return i;
}

int   dowhilenum(int num)
{
	int i = 0;//位数
	do
	{
		num /= 10; //不断除以10
		i++;		//除一次，计数一次
	} while (num);	 //num==0退出循环

	return i;
}

int fornum(int num)
{
	int i = 0;
	for (;num;num/=10) //循环
	{
		i++;
	}
	return i;
}

int gotonum(int num)
{
	int i = 0;
AAA:if (num)
	{
			num /= 10;
			i++;
			goto AAA;
	}
	return i;
}

void main()
{
	int num;
	scanf("%d", &num);
	printf("\nwhile=%d", whilenum(num));//调用函数获取位数
	printf("\ndowhile=%d", dowhilenum(num)); 
	printf("\nfor=%d", fornum(num));
	printf("\ngoto=%d", gotonum(num));
	system("pause");
}
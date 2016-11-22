#include<stdio.h>
#include<stdlib.h>

void demo_switch()
{
	int num;
	scanf("%d", &num);//用整数编号映射一个操作
	
	switch(num)
	{
	case 1:
		printf("case 1\n");
		break;
	case 2:
		printf("case 2\n");
		//break;
	case 3:
		printf("case 3\n");
		break;
	default:
		printf("default\n");
		break;
	}
}

void main()
{
	demo_switch();

	system("pause");
}
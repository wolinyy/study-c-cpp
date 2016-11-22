#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void demo01()
{
	time_t ts;
	int num = 0;

	srand((unsigned int)time(&ts));
	num = rand() % 100;//随机值
	printf("%d", num);
	num > 70 ?( printf("赢了"),printf(" >70") ): (printf("输了"),printf(" <70"));
}

void demo02()
{
	int num = 123456789;
	char buf[32] = {0};
	int i = 0;

	while(num)
	{
		buf[i++] = num % 10 + '0';
		num /= 10;
	}
	printf("buf : %s\n", buf);

	num = atoi(buf);
	printf("num = %d\n", num);
}

void main()
{
	demo01();
	demo02();

	getchar();
}
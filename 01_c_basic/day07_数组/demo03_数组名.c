#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p = a;
	int i;
	//a本质是一个常量指针
	//[]不仅可以作用于数组名(常量指针)，也可以作用指针

	// a[i] 等价于*(a+i)
	// &a[i]等价于 a+i

	for (i = 0; i < 10; i++)
	{
		printf("\n%d,%x,%d,%x", a[i], &a[i],p[i],&p[i]);
		printf("\n%d,%x,%d,%x", *(a+i),a+i,*(p+i),p+i);
	}
	getchar();
}
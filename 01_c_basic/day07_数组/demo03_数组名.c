#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p = a;
	int i;
	//a������һ������ָ��
	//[]��������������������(����ָ��)��Ҳ��������ָ��

	// a[i] �ȼ���*(a+i)
	// &a[i]�ȼ��� a+i

	for (i = 0; i < 10; i++)
	{
		printf("\n%d,%x,%d,%x", a[i], &a[i],p[i],&p[i]);
		printf("\n%d,%x,%d,%x", *(a+i),a+i,*(p+i),p+i);
	}
	getchar();
}
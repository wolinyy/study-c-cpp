#include "stdlib.h"
#include "string.h"
#include "stdio.h"

/*
int a[10]  ---->int a[] ---->int *a
数组做函数形参的时候，如果在形参中定义int a[10]语句，
c/c++编译器 会做优化，技术推演如下
int a[10]  ---->int a[] ---->int *a
总结：函数调用的时候，把数组首地址和有效数据长度传给被调用函数才是最正确的做法
*/

//当数组当做函数参数的话的时候会退化为指针 
int printfArray01(int a[10], int num)
{
	int i = 0;
	for (i=0; i<num; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n ");
	return 0;
}

int printfArray02(int a[], int num)
{
	int i = 0;
	for (i=0; i<num; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n ");
	return 0;
}

int printfArray03(int *a, int num)
{
	int i = 0;
	for (i=0; i<num; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n ");
	return 0;
}

int sortArray(int a[])
{
	int i = 0, j = 0;
	int tmp;
	for (i=0; i<10; i++) //外层循环
	{
		for (j=i+1; j<10; j++) //内层循环
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	return 0;
}

void main()
{
	//定义数组 打印数组 数组排序
	int num2;
	int a[10] = {1,3,4,5,65,76,7,34,4,32};

	num2 = sizeof(a)/sizeof(*a);
	printf("num2:%d \n", num2);
	printf("排序之前\n ");

	printfArray01(a, num2);
	printfArray02(a, num2);
	printfArray03(a, num2);

	sortArray(a);
	
	printf("排序之后\n ");
	printfArray01(a, num2);
	printfArray02(a, num2);
	printfArray03(a, num2);

	system("pause");
}
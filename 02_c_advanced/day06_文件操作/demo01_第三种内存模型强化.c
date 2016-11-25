#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//把第一种内存模型的数据排序,运算结果放到第三种内存模型中
char **SortArrayAndGen3Mem(const char ** const myArray1, int num, int *myNum);
int getArray(char ***newp,int num) ;
int freeArray(char ***newpfree,int num);
int sortTArray(char ***Arraystr, const int num);
int sortTArray1(char *(*Arraystr)[3], const int num);
int sortTArrayX(char **Arraystr, const int num);
int printArray(const char const **Arraystr, const int num);

void main()
{
	char **myArray3 = NULL;
	int len;
	//第一种内存模型
	char *myArray1[] = {"bbbbb", "aaaaa", "ccccc"};

	len = sizeof(myArray1)/sizeof(*myArray1);

	myArray3 = SortArrayAndGen3Mem(myArray1, 3, &len);

	printArray(myArray3, len);

	/*
	printArray(myArray1, len);
	//sortTArray1(&myArray1, len);
	sortTArrayX(myArray1, len);
	printArray(myArray1, len);
	*/

	system("pause");
}

int printArray(const char const **Arraystr, const int num)
{
	int i = 0;

	if(NULL == Arraystr)
	{
		return -1;
	}

	for (;i<num; i++)
	{
		printf("%s\t", *(Arraystr+i));
	}
	printf("\n");
	return 0;
}

int sortTArray(char ***Arraystr, const int num)
{
	int i = 0, j = 0;
	char **p = NULL;
	char *tmp;

	if(NULL == Arraystr)
	{
		return -1;
	}

	p = *Arraystr;
	if(NULL == p)
	{
		return -2;
	}

	for (i = 0; i < num-1; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (strcmp(p[i],p[j])>0)
			{
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}

	return 0;
}

int sortTArray1(char *(*Arraystr)[3], const int num)
{
	int i = 0, j = 0;
	char **p = NULL;
	char *tmp;

	if(NULL == Arraystr)
	{
		return -1;
	}

	p = *Arraystr;
	if(NULL == p)
	{
		return -2;
	}

	for (i = 0; i < num-1; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (strcmp(p[i],p[j])>0)
			{
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}

	return 0;
}

int sortTArrayX(char **Arraystr, const int num)
{
	int i = 0, j = 0;
	char **p = NULL;
	char *tmp;

	if(NULL == Arraystr)
	{
		return -1;
	}

	p = Arraystr;
	if(NULL == p)
	{
		return -2;
	}

	for (i = 0; i < num-1; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (strcmp(p[i],p[j])>0)
			{
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}

	return 0;
}

int freeArray(char ***newpfree,int num)
{
	char **p=NULL;
	int i=0;
	int ret=0;
	p=*newpfree;
	for (i=0;i<num;i++)
	{
		if(NULL != p[i])
		{
			free(p[i]);
		}
	}
	if(NULL != p)
	{
		free(p);
	}
	
	return ret;
}

char **SortArrayAndGen3Mem(const char ** const myArray1, int num, int *myNum)
{
	char **p = NULL;
	char *tmp;
	int i, j;
	p= (char **)malloc(num*sizeof(char *));
	if (myArray1==NULL || myNum==NULL)
	{
		printf("传入参数错误\n");
		p = NULL;
		goto END;
	}
	*myNum = num;
	for (i = 0; i < num;i++)
	{
		p[i] = NULL;
		p[i] = (char*)malloc(strlen(myArray1[i]) * sizeof(char) + 1);
		memset(p[i], 0, sizeof(p[i]));
		if (p[i]==NULL)
		{
			printf("内存分配错误！\n");
			//删除已经分配的内存
			freeArray(&p, i+1);
			goto END;
		}
		strcpy(p[i], myArray1[i]);
	}
	
	sortTArray(&p, num);
	/*
	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (strcmp(p[i],p[j])>0)
			{
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
	*/
	/*
	for (i = 0; i < num; i++)
	{
		printf("%s \n", myArray1[i]);
	}
	*/
END:
	return p;
}
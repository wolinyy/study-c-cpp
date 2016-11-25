#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int getMem(char ***myp3 /*out*/)
{
	int i = 0;

	char **tmp = (char **)malloc(10 * sizeof(char *));
	if(NULL == tmp)
	{
		return -1;
	}

	memset(tmp, 0, 10*sizeof(char*));
	for (i=0; i<3; i++)
	{
		tmp[i] = (char *)malloc(100);
	}

	*myp3 = tmp;
	return 0;
}

void freeMem(char ***myp3)
{
	int i = 0;

	char **tmp = *myp3;
	for (i=0; i<3; i++)
	{
		if(NULL != tmp[i])
		{
			free(tmp[i]);
		}
	}
	if(NULL != tmp)
	{
		free(tmp);
		*myp3 = NULL;
	}
}

void demo01()
{
	char **p2 = NULL;
	char ***p3 = NULL;

	//ֱ���޸�p2��ֵ
	p2 = 1;
	p2 = 3;
	printf("p2:%d\n", p2);

	//����޸�p2��ֵ
	p3 = &p2;
	*p3 = 100;
	printf("p2:%d\n", p2);

	getMem(&p2);
	printf("p2:%d\n", p2);

	freeMem(&p2);
	printf("p2:%d\n", p2);
}

void getp7(char ******** myp8)
{
	//p7ȡ��ַ������p8��*p8ȥ��ӵ��޸�p7��ֵ
	*myp8 = 200;
}

void demo02()
{
	//����4���ֽڵ��ڴ�
	char ******* p7 = NULL;

	p7 = 1;
	p7 = 2;

	{
		char ******** p8 = NULL;
		p8 = &p7;
		*p8 = 100;
	}
	printf("\np7:%d\n", p7);
	getp7(&p7);
	printf("ͨ���༶ָ�룬ȥ����޸�p7��ֵp7:%d\n", p7);
}

void main()
{
	demo01();
	demo02();

	system("pause");
}
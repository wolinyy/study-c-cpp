#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//ǿ��ָ������char* a[30] �� ����ָ��char (*a)[30]
//()[]���ȼ�  
char *a() //��������
{
	return NULL;
}
char (*a2)(); //��һ��ָ����������������������ĸ��Լ��ڴ�


char  **getMem(int count)
{
	int i = 0;
	char **tmp = (char **)malloc((count+1)*sizeof(char *) );
	for (i=0; i<count; i++)
	{
		tmp[i]  = (char *)malloc(100);
	}

	tmp[count] = '\0'; //ת���ַ���0
	tmp[count] = 0; //ת���ַ���0
	tmp[count] = NULL; //ת���ַ���0

	return tmp;
}

void sortArray(char **myArray)
{
	int i = 0, j = 0;

	char *tmp;
	for (i=0; myArray[i] != NULL; i++)
	{
		for (j=i+1; myArray[j] != NULL; j++)
		{
			if (strcmp(myArray[i], myArray[j]) > 0)
			{
				tmp = myArray[i]; //����ط���������ָ�����
				myArray[i] = myArray[j];
				myArray[j] = tmp;
			}
		}
	}
}

void sortArray02(char **myArray)
{
	int i = 0, j = 0;

	char tmp[200];
	for (i=0; myArray[i]!=NULL; i++)
	{
		for (j=i+1;  myArray[j]!=NULL; j++)
		{
			if (strcmp(myArray[i], myArray[j]) > 0)
			{
				strcpy(tmp, myArray[i]);
				strcpy(myArray[i], myArray[j]);
				strcpy(myArray[j], tmp); //������buf������
			}
		}
	}
}

void  printfArray(char **myArray)
{
	int i = 0, j = 0;

	for (i=0; myArray[i] != NULL; i++)
	{
		printf("%s \n", myArray[i]);
	}
}
void demo01()
{
	char buf[10][30] = {"dddd", "1111", "s222222", "333333", "555555555"};
	printf("%s \n", *(buf+2));
}
void main()
{
	char **pArray = NULL;
	pArray = getMem(3);

	demo01();

	strcpy(pArray[0], "bbbbb");
	strcpy(pArray[1], "aaaa");
	strcpy(pArray[2], "cccc");

	printf("����֮ǰ\n");
	printfArray(pArray);

	sortArray(pArray, 3);
	//sortArray02(pArray); 

	printf("����֮��\n");
	printfArray(pArray ,3);
	system("pause");
}

void main0011()
{
	//03���������͡�����ָ�����͡�����ָ�����ͱ���
	typedef int MyTypeArray[5];
	MyTypeArray a; //int a[5];
	int intArray[3][5];


	{
		typedef int (*MyPTypeArray)[5];
		MyPTypeArray  myArrayPoint ;
		myArrayPoint = &a;
		(*myArrayPoint)[0] = 1; //ͨ��һ������ָ�����ȥ���������ڴ�
	}

	{
		int (*myArrayVar)[5]; //���߱�����ҿ���4���ֽڵ��ڴ桮
		myArrayVar = &a;
		(*myArrayVar)[1] = 2;
		
	}

	{
		int (*myArrayVar2)[5]; //���߱�����ҿ���4���ֽڵ��ڴ桮
		myArrayVar2 = intArray; //
	}

}
#include "stdlib.h"
#include "string.h"
#include "stdio.h"

void demo01()
{
	int a = 10; 
	int *  p = NULL;//ָ����һ������
	int c = 0;

	a = 11; //ֱ���޸�

	p = &a;

	//p = &a +1;	//���б���
	//p = &a +2;
	*p = 20; //*p����
	//*p����=����ߣ�д�ڴ�
	//*��˭�ĵ�ַ������ȥ��ӵ��޸�˭��
	//*��&a������ȥ��ӵ��޸İ���
	//*p���ڵȺŵ��ұߣ���p��ָ�ڴ�ռ�����ݡ�
	c = *p;

	//*p  *����һ��Կ�ף�ͨ��p�����Ŵ�һ���ڴ�飬ȥ�����ڴ�ռ䡣��
}

//1վ��c++�������ĽǶ� ָ�����һ������������֮��ɶҲ���ǣ�
//������1��* ����8��*��c++������������ֻ�����4���ֽ��ڴ�
//2
/*
int getbuf01(char *p); 
int getbuf01(char* p);
int getbuf02(char **p); 
int getbuf02(char * *p); 
int getbuf02(char ** p);
int getbuf03(char (*p)[]); 
int getbuf03(char (*p) []);  
int getbuf03(char ( *p)[ ]);
int getbuf03(char p[10][30]);
int getbuf04(char *****p);
*/

//����һ��ָ��Ҳ���������ͣ������������ͣ���ָ��ָ����ڴ�ռ����������
void main()
{
	char buf1[100] = {0};
	char buf2[100] = {0};
	char *p1 = buf1;
	char *p2 = buf2;

	strcpy(buf1, "abcdefg");

	while(*p1 != '\0')
	{
		*p2 = *p1;
		p1++;
		p2 ++;
	}

	printf("buf2:%s", buf2);

	demo01();
	system("pause");
}
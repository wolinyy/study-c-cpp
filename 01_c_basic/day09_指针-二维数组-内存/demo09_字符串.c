#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char str[10] = "tasklist";//���������޸�
	char *p = "calc";  //���������޸�
	char *p1 = str;

	//����һ���ַ������������׵�ַ���ݸ�p
	printf("%d,%d\n", sizeof(p), sizeof("calc"));

	//*p = 'l';	//���벻��������ʱ�쳣
	*p1 = 'l';

	printf("%s\t%s\n", p,p1);
	system("pause");
}
#include<stdio.h>

void demo01()
{
	wchar_t wstr[10] = L"����";  //��ǰ����ϵͳ�汾  ������
	char   str[10] = "����";	//����ռ�����ֽ�

	wprintf(L"%ws", wstr);	//���ʻ��������Ӣ�Ľ��棬���Ľ��棬
	printf("%s", str);
}

void demo02()
{
	wchar_t ch = L'a';	//���ַ�ռ�����ֽ�
	char cha = 'a';

	printf("\n%d, %d", sizeof(ch), sizeof(cha));
	printf("\n%c", cha);
	//wprintf("\n%wc", ch);
}

void demo03()
{
	printf("\n%s", "�쳯");
	printf("\n%d", sizeof("��"));
	printf("\n%d", sizeof("�쳯"));
}

void main()
{
	demo01();
	demo02();
	demo03();

	getchar();
}
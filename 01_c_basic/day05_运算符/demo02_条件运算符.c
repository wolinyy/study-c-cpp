#include<stdio.h>
#include<stdlib.h>

void demo01()
{
	int a = 3, b = 3;
	a++ > b++ ? printf("1") : a>b?printf("2"):printf("3");
	printf("\n");
}

void demo02()
{
	//����������
	char str[13] = "i love china"; //����һ���ַ�������
	int i = 0;

	printf("%s\n", str);  //��ӡ�ַ���
	while (i < 13)	//��0ѭ����13
	{
		str[i] != '\0' ? str[i] += i : 1; //�ж��ַ���û�н�����
		i++;
	}
	printf("%s\n", str);
	//����������
	{
		int i = 0;
		while (i < 13)
		{
			str[i] != '\0' ? str[i] -= i : 1;  //�ж��ַ���û�н�����
			i++;
		}
		printf("%s\n", str);
	}
}

void main()
{
	demo01();
	demo02();

	system("pause");
}
#define _CRT_SECURE_NO_WARNINGS //�رհ�ȫ���

#include<stdio.h>
#include<stdlib.h>

int  whilenum(int num)
{
    //12345 1234  123 12 1 0
	int  i = 0;
	while (num) //num==0ѭ����ֹ
	{
		num /= 10;	//���ϳ���10
		i++;		//��һ�Σ�����һ��
	}
	return i;
}

int   dowhilenum(int num)
{
	int i = 0;//λ��
	do
	{
		num /= 10; //���ϳ���10
		i++;		//��һ�Σ�����һ��
	} while (num);	 //num==0�˳�ѭ��

	return i;
}

int fornum(int num)
{
	int i = 0;
	for (;num;num/=10) //ѭ��
	{
		i++;
	}
	return i;
}

int gotonum(int num)
{
	int i = 0;
AAA:if (num)
	{
			num /= 10;
			i++;
			goto AAA;
	}
	return i;
}

void main()
{
	int num;
	scanf("%d", &num);
	printf("\nwhile=%d", whilenum(num));//���ú�����ȡλ��
	printf("\ndowhile=%d", dowhilenum(num)); 
	printf("\nfor=%d", fornum(num));
	printf("\ngoto=%d", gotonum(num));
	system("pause");
}
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

#include "des.h"
void main()
{
	int ret = 0;
	unsigned char plain[100];
	int plainlen = 0;

	unsigned char plain2[100];
	int plain2len = 0;
	
	unsigned char cryptdata[100];
	int cryptlen = 0;

	strcpy(plain, "abcdefgdafdsafdsafd");

	plainlen = strlen((char *)plain);//���Ѿ�֪���� unsigned char  buf�д�ŵ�ȷʵ�ǿɼ��ֽڣ�����תû������
	//�û�ʹ�õĺ���
	ret =  DesEnc(plain, plainlen, cryptdata, &cryptlen);
	if (ret != 0)
	{
		printf("func DesEnc() err:%d \n", ret);
		return;
	}
	
	printf("����:%s\n", cryptdata);
	printf("���ĳ���:%d\n", cryptlen);

	//�û�ʹ�ú���des����
	ret =   DesDec(cryptdata, cryptlen, plain2, &plain2len);
	if (ret != 0)
	{
		printf("func DesDec() err:%d \n", ret);
		return;
	}

	if (plainlen != plain2len)
	{
		printf("�������ĳ��Ȳ�һ��\n");
		return ;
	}

	if (memcmp(plain, plain2, plain2len)==0 )
	{
		printf("������������һ��\n");
	}
	else
	{
		printf("�����������ݲ�һ��\n");
	}

		
	system("pause");
}
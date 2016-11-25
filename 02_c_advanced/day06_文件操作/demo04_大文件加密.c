#include "stdlib.h"
#include "stdio.h"
#include "string.h"

#include "des.h"

//����ļ����ܵĲ���
int FileSymEnc(char *filename1, char *filename2)
{
	int ret  =0;
	FILE *fp1 = NULL;
	FILE *fp2 = NULL;
	unsigned char plain[4096];
	int plainlen = 0;
	int writtenlen = 0;

	unsigned char cryptdata[4096+1024];
	int cryptlen = 0;

	fp1 = fopen(filename1, "rb");
	if (fp1 == NULL)
	{
		ret = -1;
		goto End;	
	}
	fp2 = fopen(filename2, "wb");
	if (fp2 == NULL)
	{
		ret = -2;
		goto End;	
	}

	while (!feof(fp1))
	{
		plainlen = fread(plain, 1, 4096, fp1); //fread�����ķ���ֵ�Ƿ��ص�ʵ�ʳ���
		if (feof(fp1))
		{
			break;
		}

		ret =  DesEnc(plain, plainlen, cryptdata, &cryptlen);
		if (ret != 0)
		{
			printf("func DesEnc() err:%d \n", ret);
			return;
		}

		printf("cryptlen:%d \n", cryptlen);

		//�������4k������
		//writtenlen = fwrite(plain, 1, plainlen, fp2);
		writtenlen = fwrite(cryptdata, 1, cryptlen, fp2);
		if (writtenlen != cryptlen) //������Ȳ���ȣ�˵��д�ļ�������IO����
		{
			ret = -4;
			printf("д���ļ�ʧ��\n");
			goto End;
		}
	}

	ret =  DesEnc(plain, plainlen, cryptdata, &cryptlen);
	if (ret != 0)
	{
		printf("func DesEnc() err:%d \n", ret);
		return;
	}
	printf("cryptlen:%d \n", cryptlen);
	//����С��4k������
	//writtenlen = fwrite(plain, 1, plainlen, fp2);
	writtenlen = fwrite(cryptdata, 1, cryptlen, fp2);
	if (writtenlen != cryptlen) //������Ȳ���ȣ�˵��д�ļ�������IO����
	{
		ret = -3;
		printf("д���ļ�ʧ��\n");
		goto End;
	}

End:
	if (fp1 != NULL) fclose(fp1);
	if (fp2 != NULL) fclose(fp2);

	return ret;
}

void main()
{
	int ret = 0;
	char *file1 = "c:/fileTest/1.txt";
	char *file2 = "c:/fileTest/222.txt";

	ret = FileSymEnc(file1, file2);
	if (ret != 0)
	{
		printf("FileSymEnc err:%d\n", ret);
		system("pause");
		return ;
	}

	system("pause");
}
#include <stdio.h>  

/*
�ֽ��������ֱ�ʾ��������˷���big ending����С�˷���little  ending����
�����ֽ�����õ��Ǵ�˷���
�����ֽ���ͬ��CPU���õķ�����һ��������ͨ���������鿴�Լ��������ֽ���
��˷�����λ�ֽ��ŷ����ڴ�͵�ַ�ˣ���λ�ֽ��ŷ����ڴ�ĸߵ�ַ�ˡ�
С�˷�����λ�ֽ��ŷ����ڴ�ĵ͵�ַ�ˣ���λ�ֽ��ŷ����ڴ�ĸߵ�ַ�ˡ�
��һ��unsigned short ���ݣ���ռ2���ֽڣ�������ֵ0x1234��
�����õĴ�˷�������͵�ַ��Ӧ�ô�ŵ���0x12��
�����õ�С�˷�������͵�ַ��Ӧ�ô�ŵ���0x34��
����ͨ���������������ߵ͵�ַ�����ݡ�
*/

typedef union{  
	unsigned short value;  
	unsigned char bytes[2];  
}Test;  

int main(void)  
{  
	Test test_value;  
	test_value.value = 0x1234;  

	if(test_value.bytes[0] == 0x12 && test_value.bytes[1] == 0x34)  
		printf("big ending");  
	else if(test_value.bytes[0] == 0x34 && test_value.bytes[1] == 0x12)  
		printf("little ending");  
	else  
		printf("use test_value error");  

	printf("\n");
	getchar();
	return 0;  
}  
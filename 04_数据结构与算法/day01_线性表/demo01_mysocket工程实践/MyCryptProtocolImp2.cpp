#include "MyCryptProtocolImp2.h"


MyCryptProtocolImp2::MyCryptProtocolImp2(void)
{
	
}

MyCryptProtocolImp2::~MyCryptProtocolImp2(void)
{
	printf("ddddd");
}


//�û�ʹ�õĺ���
 int MyCryptProtocolImp2::DesEnc(
	unsigned char *pInData,
	int            nInDataLen,
	unsigned char *pOutData,
	int           *pOutDataLen)
 {
	 printf("MyCryptProtocolImp2 ....����һ��\n");
	 strcpy((char *)pOutData, "22222222222222");
	 *pOutDataLen = 10;
	 return 0;
 }

//�û�ʹ�ú���des����
 int MyCryptProtocolImp2::DesDec(
	unsigned char *pInData,
	int            nInDataLen,
	unsigned char *pOutData,
	int           *pOutDataLen)
 {
	  printf("MyCryptProtocolImp2 ....����һ��\n");
	  strcpy((char *)pOutData, "1111111111");
	  *pOutDataLen = 10;
	  return 0;
 }

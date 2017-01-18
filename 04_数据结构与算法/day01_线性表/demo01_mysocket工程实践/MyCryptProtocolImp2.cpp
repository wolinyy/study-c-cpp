#include "MyCryptProtocolImp2.h"


MyCryptProtocolImp2::MyCryptProtocolImp2(void)
{
	
}

MyCryptProtocolImp2::~MyCryptProtocolImp2(void)
{
	printf("ddddd");
}


//用户使用的函数
 int MyCryptProtocolImp2::DesEnc(
	unsigned char *pInData,
	int            nInDataLen,
	unsigned char *pOutData,
	int           *pOutDataLen)
 {
	 printf("MyCryptProtocolImp2 ....到此一游\n");
	 strcpy((char *)pOutData, "22222222222222");
	 *pOutDataLen = 10;
	 return 0;
 }

//用户使用函数des解密
 int MyCryptProtocolImp2::DesDec(
	unsigned char *pInData,
	int            nInDataLen,
	unsigned char *pOutData,
	int           *pOutDataLen)
 {
	  printf("MyCryptProtocolImp2 ....到此一游\n");
	  strcpy((char *)pOutData, "1111111111");
	  *pOutDataLen = 10;
	  return 0;
 }

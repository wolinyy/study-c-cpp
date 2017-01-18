#pragma once
#include "CryptoProtocol.h"


class MyCryptProtocolImp2 :public CryptoProtocol
{
public:
	MyCryptProtocolImp2(void);
	~MyCryptProtocolImp2(void);

	//用户使用的函数
	virtual int DesEnc(
		unsigned char *pInData,
		int            nInDataLen,
		unsigned char *pOutData,
		int           *pOutDataLen);

	//用户使用函数des解密
	virtual int DesDec(
		unsigned char *pInData,
		int            nInDataLen,
		unsigned char *pOutData,
		int           *pOutDataLen);


};


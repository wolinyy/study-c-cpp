#pragma once
#include "CryptoProtocol.h"


class MyCryptProtocolImp2 :public CryptoProtocol
{
public:
	MyCryptProtocolImp2(void);
	~MyCryptProtocolImp2(void);

	//�û�ʹ�õĺ���
	virtual int DesEnc(
		unsigned char *pInData,
		int            nInDataLen,
		unsigned char *pOutData,
		int           *pOutDataLen);

	//�û�ʹ�ú���des����
	virtual int DesDec(
		unsigned char *pInData,
		int            nInDataLen,
		unsigned char *pOutData,
		int           *pOutDataLen);


};


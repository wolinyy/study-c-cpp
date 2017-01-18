#pragma once
#include "iostream"
using namespace std;

//中石油制定的厂商入围的加密解密接口。。。。
class CryptoProtocol
{
public:
	CryptoProtocol(void)
	{

	}

	virtual ~CryptoProtocol(void)
	{

	}

	//用户使用的函数
	virtual int DesEnc(
		unsigned char *pInData,
		int            nInDataLen,
		unsigned char *pOutData,
		int           *pOutDataLen) = 0;

	//用户使用函数des解密
	virtual int DesDec(
		unsigned char *pInData,
		int            nInDataLen,
		unsigned char *pOutData,
		int           *pOutDataLen) = 0;
};


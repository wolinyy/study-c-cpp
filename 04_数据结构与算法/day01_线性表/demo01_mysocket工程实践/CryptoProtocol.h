#pragma once
#include "iostream"
using namespace std;

//��ʯ���ƶ��ĳ�����Χ�ļ��ܽ��ܽӿڡ�������
class CryptoProtocol
{
public:
	CryptoProtocol(void)
	{

	}

	virtual ~CryptoProtocol(void)
	{

	}

	//�û�ʹ�õĺ���
	virtual int DesEnc(
		unsigned char *pInData,
		int            nInDataLen,
		unsigned char *pOutData,
		int           *pOutDataLen) = 0;

	//�û�ʹ�ú���des����
	virtual int DesDec(
		unsigned char *pInData,
		int            nInDataLen,
		unsigned char *pOutData,
		int           *pOutDataLen) = 0;
};


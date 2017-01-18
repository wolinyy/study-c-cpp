#include "iostream"
using namespace std;
#include "SocketProtocol.h"
#include "CryptoProtocol.h"

#include "MySocket1.h"
#include "MySocketImp2.h"
#include "MySocketImp3.h"

#include "MyCryptProtocolImp2.h"

//��ʯ�Ϳ�ܣ�������
int MainOP(SocketProtocol *sp, unsigned char *buf, int buflen, unsigned char *out, int *outlen)
{
	int ret = 0;
	ret =  sp->cltSocketInit();
	ret = sp->cltSocketSend(buf, buflen);
	ret = sp->cltSocketRev(out, outlen);
	ret = sp->cltSocketDestory();
	return ret;
}
//��ʯ�� ҵ��㣬���ɵ��������̵�Ӳ�������ӿڡ�����
void main2222()
{
	int ret = 0;
	char buf[1024] = {0};
	int buflen = 10;

	char out[1024] = {0};
	int outlen = 10;
	 SocketProtocol *sp = NULL;
	 strcpy(buf, "dddddddddddddssssssssssssssssss");
	 /*
	ret =  sp->cltSocketInit();
	ret = sp->cltSocketSend((unsigned char *)buf, buflen);
	ret = sp->cltSocketRev((unsigned char *)out, &outlen);
	ret = sp->cltSocketDestory();
	*/

	//������󸶸��˸���ָ��
	sp = new CMySocketImp3();

	ret = MainOP(sp,  (unsigned char *)buf, buflen, (unsigned char *)out, &outlen);
	printf("out:%s ", out);

	delete sp;


	system("pause");
}

//ҵ���ܣ��������ࣩ

//class MainOPClass : public SocketProtocol2, public AbstraEncDecProtocol2
class MainOPClass
{
public:
	MainOPClass()
	{
		sp = NULL;
	}
	static int MainOP2(SocketProtocol *sp, unsigned char *buf, int buflen, unsigned char *out, int *outlen)
	{
		int ret = 0;
		ret =  sp->cltSocketInit();
		ret = sp->cltSocketSend(buf, buflen);
		ret = sp->cltSocketRev(out, outlen);
		ret = sp->cltSocketDestory();
		return ret;
	}

	int MainOP1( unsigned char *buf, int buflen, unsigned char *out, int *outlen)
	{
		int ret = 0;
		unsigned char *crypData = (unsigned char *)malloc(buflen + 128);
		int cryptlen = 0;
		if (crypData == NULL)
		{
			ret = -1;
			goto End;
		}

		unsigned char *crypData2 = (unsigned char *)malloc(buflen + 128);
		int cryptlen2 = 0;
		if (crypData == NULL)
		{
			ret = -2;
			goto End;
		}

		ret =  sp->cltSocketInit();
		if (ret != 0)
		{
			goto End;
		}
		//����֮ǰҪ����
		ret = cp->DesEnc(buf, buflen, crypData, &cryptlen);
		if (ret != 0)
		{
			goto End;
		}
		ret = sp->cltSocketSend(crypData, cryptlen);
		if (ret != 0)
		{
			goto End;
		}
		ret = sp->cltSocketRev(crypData2, &cryptlen2);
		if (ret != 0)
		{
			goto End;
		}
		//����֮��Ҫ����
		ret = cp->DesDec(crypData2, cryptlen2, out, outlen);
		if (ret != 0)
		{
			goto End;
		}

End:
		if (crypData != NULL)
		{
			free(crypData); crypData = NULL;
		}
		if (crypData2 != NULL)
		{
			free(crypData2); crypData2 = NULL;
		}
		ret = sp->cltSocketDestory();
		return ret;
	}
public:
	SocketProtocol * getSp() const 
	{ 
		return sp;
	}
	void setSp(SocketProtocol * val) 
	{ 
		sp = val; 
	}
	void setCp(CryptoProtocol * val) 
	{ 
		cp = val; 
	}
protected:
private:
	//�ڿ�����м�����һ��Э�顣������
	SocketProtocol *sp;
	CryptoProtocol *cp;
	
	//���������̵ļ�����

	//AbstratEncDecClass *sp;

		
};


//��ʯ�� ҵ��㣬���ɵ��������̵�Ӳ�������ӿڡ�����
void main()
{
	int ret = 0;
	char buf[1024] = {0};
	int buflen = 10;

	char out[1024] = {0};
	int outlen = 10;
	SocketProtocol *sp = NULL;
	CryptoProtocol *cp = NULL;
	strcpy(buf, "dddddddddddddssssssssssssssssss");

	sp = new CMySocketImp3();
	cp = new MyCryptProtocolImp2();
	MainOPClass mainOpClass;
	mainOpClass.setSp(sp); //ע��
	mainOpClass.setCp(cp); //ע��

	//��MainOPClass�а�����һ��Э����sp�����ֹ�ϵǿ
	mainOpClass.MainOP1((unsigned char *)buf, buflen, (unsigned char *)out, &outlen);

	//��sp ������������������
	//spֻ����������������ϵ��������
	//mainOpClass.MainOP2(sp, (unsigned char *)buf, buflen, (unsigned char *)out, &outlen);

	//MainOPClass::MainOP2(sp, (unsigned char *)buf, buflen, (unsigned char *)out, &outlen);
	printf("out:%s \n", out);


	delete sp;
	delete cp;


	system("pause");
}
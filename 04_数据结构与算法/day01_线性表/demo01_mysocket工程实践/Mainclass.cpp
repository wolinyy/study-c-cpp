#include "iostream"
using namespace std;
#include "SocketProtocol.h"
#include "CryptoProtocol.h"

#include "MySocket1.h"
#include "MySocketImp2.h"
#include "MySocketImp3.h"

#include "MyCryptProtocolImp2.h"

//中石油框架（函数）
int MainOP(SocketProtocol *sp, unsigned char *buf, int buflen, unsigned char *out, int *outlen)
{
	int ret = 0;
	ret =  sp->cltSocketInit();
	ret = sp->cltSocketSend(buf, buflen);
	ret = sp->cltSocketRev(out, outlen);
	ret = sp->cltSocketDestory();
	return ret;
}
//中石油 业务层，集成第三个厂商的硬件。。接口。。。
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

	//子类对象付给了父类指针
	sp = new CMySocketImp3();

	ret = MainOP(sp,  (unsigned char *)buf, buflen, (unsigned char *)out, &outlen);
	printf("out:%s ", out);

	delete sp;


	system("pause");
}

//业务框架（升级成类）

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
		//发送之前要加密
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
		//接受之后要解密
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
	//在框架类中集成了一个协议。。。。
	SocketProtocol *sp;
	CryptoProtocol *cp;
	
	//第三个厂商的加密了

	//AbstratEncDecClass *sp;

		
};


//中石油 业务层，集成第三个厂商的硬件。。接口。。。
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
	mainOpClass.setSp(sp); //注入
	mainOpClass.setCp(cp); //注入

	//在MainOPClass中包含了一个协议类sp，这种关系强
	mainOpClass.MainOP1((unsigned char *)buf, buflen, (unsigned char *)out, &outlen);

	//对sp 做函数参数。。。。
	//sp只是做函数参数，关系弱。。。
	//mainOpClass.MainOP2(sp, (unsigned char *)buf, buflen, (unsigned char *)out, &outlen);

	//MainOPClass::MainOP2(sp, (unsigned char *)buf, buflen, (unsigned char *)out, &outlen);
	printf("out:%s \n", out);


	delete sp;
	delete cp;


	system("pause");
}
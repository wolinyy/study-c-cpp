#include "stdlib.h"
#include "string.h"
#include "stdio.h"
#include "socketclientdll.h"
#include "itcastlog.h"

void main111()
{
	ITCAST_LOG(__FILE__, __LINE__,  LogLevel[0], 0, "aaaaaaa");
	ITCAST_LOG(__FILE__, __LINE__,  LogLevel[1], 1, "1111111111");
	ITCAST_LOG(__FILE__, __LINE__,  LogLevel[2], 2, "222222222");
	ITCAST_LOG(__FILE__, __LINE__,  LogLevel[3], 3, "33333333");
	ITCAST_LOG(__FILE__, __LINE__,  LogLevel[4], 4, "44444444444");
	
	system("pause");
}

void main01api()
{
	int ret = 0;

	void *handle = NULL;

	unsigned char buf[1024]; /*in*/  
	int buflen = 10;

	unsigned char out[1024] = {0}; /*in*/
	int outlen = 0;

	strcpy(buf, "aadd3456789012233ddddddddddddddaaaaaaaaaaa");
	//客户端初始化 获取handle上下
	//运行的上下文环境 
	ret = cltSocketInit(&handle/*out*/);
	if (ret !=0)
	{
		printf("func cltSocketInit() err :%d \n", ret);
		return ;
	}

// 	//客户端发报文
	ret = cltSocketSend(handle /*in*/, buf /*in*/,buflen /*in*/);
	if (ret !=0)
	{
		printf("func cltSocketSend() err :%d \n", ret);
		return ;
	}
// 
// 	//客户端收报文
	ret = cltSocketRev(handle /*in*/, out /*in*/, &outlen /*in out*/);
	if (ret != 0)
	{
		printf("func cltSocketRev() err :%d \n", ret);
		return ;
	}
	printf("out: %s \n", out);
// 
// 	//客户端释放资源
	ret = cltSocketDestory(handle/*in*/);
	if (ret != 0)
	{
		printf("func cltSocketDestory() err :%d \n", ret);
		return ;
	}

	system("pause");
}

void main()
{
	int ret = 0;

	void *handle = NULL;

	unsigned char buf[1024]; /*in*/  
	int buflen = 10;

	unsigned char *out = NULL; /*in*/
	int outlen = 0;

	strcpy(buf, "aadd3456789012233ddddddddddddddaaaaaaaaaaa");
	//客户端初始化 获取handle上下
	//运行的上下文环境 
	ret = cltSocketInit2(&handle/*out*/);
	if (ret !=0)
	{
		printf("func cltSocketInit2() err :%d \n", ret);
		return ;
	}

	// 	//客户端发报文
	ret = cltSocketSend2(handle /*in*/, buf /*in*/,buflen /*in*/);
	if (ret !=0)
	{
		printf("func cltSocketSend2() err :%d \n", ret);
		return ;
	}
	// 
	// 	//客户端收报文
	ret = cltSocketRev2(handle /*in*/, &out /*in*/, &outlen /*in out*/);
	if (ret != 0)
	{
		printf("func cltSocketRev() err :%d \n", ret);
		return ;
	}
	printf("out: %s \n", out);
	cltSocketRev2_Free(&out);

	// 
	// 	//客户端释放资源
	ret = cltSocketDestory2(&handle/*in*/);
	if (ret != 0)
	{
		printf("func cltSocketDestory2() err :%d \n", ret);
		return ;
	}

	system("pause");
}
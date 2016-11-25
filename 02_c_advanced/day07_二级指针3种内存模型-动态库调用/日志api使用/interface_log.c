#include "itcastlog.h"

void main()
{
	ITCAST_LOG(__FILE__, __LINE__,  LogLevel[0], 0, "aaaaaaa");
	ITCAST_LOG(__FILE__, __LINE__,  LogLevel[1], 1, "1111111111");
	ITCAST_LOG(__FILE__, __LINE__,  LogLevel[2], 2, "222222222");
	ITCAST_LOG(__FILE__, __LINE__,  LogLevel[3], 3, "33333333");
	ITCAST_LOG(__FILE__, __LINE__,  LogLevel[4], 4, "44444444444");

	system("pause");
}
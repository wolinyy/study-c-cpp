#include <stdio.h>  

/*
字节序有两种表示方法：大端法（big ending），小端法（little  ending）。
网络字节序采用的是大端法。
主机字节序不同的CPU采用的方法不一样，可以通过代码来查看自己主机的字节序。
大端法：高位字节排放在内存低地址端，低位字节排放在内存的高地址端。
小端法：低位字节排放在内存的低地址端，高位字节排放在内存的高地址端。
看一个unsigned short 数据，它占2个字节，给它赋值0x1234。
若采用的大端法，则其低地址端应该存放的是0x12；
若采用的小端法，则其低地址端应该存放的是0x34；
可以通过联合体来获得其高低地址的数据。
*/

typedef union{  
	unsigned short value;  
	unsigned char bytes[2];  
}Test;  

int main(void)  
{  
	Test test_value;  
	test_value.value = 0x1234;  

	if(test_value.bytes[0] == 0x12 && test_value.bytes[1] == 0x34)  
		printf("big ending");  
	else if(test_value.bytes[0] == 0x34 && test_value.bytes[1] == 0x12)  
		printf("little ending");  
	else  
		printf("use test_value error");  

	printf("\n");
	getchar();
	return 0;  
}  
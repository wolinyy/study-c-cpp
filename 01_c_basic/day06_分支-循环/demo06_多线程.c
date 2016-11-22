#include<windows.h>
#include<stdlib.h>
#include<process.h>//进程

void runmsg(void *p)
{
	MessageBoxA(0, "多线程循环测试", "多线程", 1);
	Sleep(5000);
	system("calc");
}

void main()
{
	int i = 0;
	while (i < 10)
	{
		_beginthread(runmsg, 0, NULL);
		i++;
	}
	system("pause");
}

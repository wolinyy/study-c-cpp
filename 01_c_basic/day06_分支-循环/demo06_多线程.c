#include<windows.h>
#include<stdlib.h>
#include<process.h>//����

void runmsg(void *p)
{
	MessageBoxA(0, "���߳�ѭ������", "���߳�", 1);
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

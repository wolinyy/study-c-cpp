#include <Windows.h>

//ģ�������ĵ�����ע��
_declspec(dllexport)
	void run()
{
	MessageBoxA(0, "dll����", "����", 0);
}
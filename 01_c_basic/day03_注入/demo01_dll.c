#include <Windows.h>

//模块启动的导出表注册
_declspec(dllexport)
	void run()
{
	MessageBoxA(0, "dll测试", "标题", 0);
}
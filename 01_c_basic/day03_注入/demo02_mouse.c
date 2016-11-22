#include<Windows.h>

void main()
{
	//最小化桌面
	keybd_event(0x5b, 0, 0, 0);//键盘按下
	keybd_event('D', 0, 0, 0);

	keybd_event('D', 0, 2, 0);
	keybd_event(0x5b, 0, 2, 0);//键盘松开

	//休眠两秒
	Sleep(2000);

	SetCursorPos(40, 40);
	Sleep(2000);

	//鼠标双击打开
	//mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	//mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	//mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	//mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);


}

// win
// win+d
//win +e
//win +M
// Ctrl +Alt+ delete
void main1()
{
	keybd_event(0x5b, 0, 0, 0);//键盘按下
	keybd_event('E', 0, 0, 0);

	keybd_event('E', 0, 2, 0);
	keybd_event(0x5b, 0, 2, 0);//键盘松开




	
}
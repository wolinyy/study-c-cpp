#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

void openbaidu()
{

	system("\"C:\\Program Files\\Internet Explorer\\iexplore.exe\"   http://www.baidu.com ");

}

void  yopenbaidu()
{
	ShellExecuteA(0, "open", "http://www.baidu.com", 0, 0, 3);
}

void searchjava()
{
	keybd_event('J', 0, 0, 0);
	keybd_event('J', 0, 2, 0);
	Sleep(20);

	keybd_event('A', 0, 0, 0);
	keybd_event('A', 0, 2, 0);
	Sleep(20);

	keybd_event('V', 0, 0, 0);
	keybd_event('V', 0, 2, 0);
	Sleep(20);

	keybd_event('A', 0, 0, 0);
	keybd_event('A', 0, 2, 0);
	Sleep(20);

	keybd_event(0x0D, 0, 0, 0);
	keybd_event(0x0D, 0, 2, 0);
	Sleep(20);

	keybd_event(0x0D, 0, 0, 0);
	keybd_event(0x0D, 0, 2, 0);
	Sleep(20);


}

void  click()
{
	SetCursorPos(300, 270);
	Sleep(20);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	Sleep(20);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);


	SetCursorPos(270, 270);
	Sleep(20);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	Sleep(20);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

	SetCursorPos(100, 280);
	Sleep(20);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	Sleep(20);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}



void  close()
{

	system("taskkill /f /im 360chrome.exe");
}

void  serachjingdong()
{
	keybd_event('J', 0, 0, 0);
	keybd_event('J', 0, 2, 0);
	Sleep(20);

	keybd_event('I', 0, 0, 0);
	keybd_event('I', 0, 2, 0);
	Sleep(20);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	Sleep(20);
	keybd_event('G', 0, 0, 0);
	keybd_event('G', 0, 2, 0);
	Sleep(20);
	keybd_event('D', 0, 0, 0);
	keybd_event('D', 0, 2, 0);
	Sleep(20);
	keybd_event('O', 0, 0, 0);
	keybd_event('O', 0, 2, 0);
	Sleep(20);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	Sleep(20);
	keybd_event('G', 0, 0, 0);
	keybd_event('G', 0, 2, 0);
	Sleep(20);


	keybd_event(0x0D, 0, 0, 0);
	keybd_event(0x0D, 0, 2, 0);
	Sleep(20);

	keybd_event(0x0D, 0, 0, 0);
	keybd_event(0x0D, 0, 2, 0);
	Sleep(20);

}



void main()
{

	while (1)
	{
		Sleep(20);
		yopenbaidu();
		Sleep(2000);
		//search();
		serachjingdong();
		Sleep(2000);
		click();
		Sleep(3000);
		close();
	}
	

}
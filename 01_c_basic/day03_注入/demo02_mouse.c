#include<Windows.h>

void main()
{
	//��С������
	keybd_event(0x5b, 0, 0, 0);//���̰���
	keybd_event('D', 0, 0, 0);

	keybd_event('D', 0, 2, 0);
	keybd_event(0x5b, 0, 2, 0);//�����ɿ�

	//��������
	Sleep(2000);

	SetCursorPos(40, 40);
	Sleep(2000);

	//���˫����
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
	keybd_event(0x5b, 0, 0, 0);//���̰���
	keybd_event('E', 0, 0, 0);

	keybd_event('E', 0, 2, 0);
	keybd_event(0x5b, 0, 2, 0);//�����ɿ�




	
}
#include<stdlib.h>

void main()
{
	//system("\"C:\\Program Files\\Internet Explorer\\iexplore.exe\"");
	//(x86)64位操作系统加上空格
	system("\"C:\\Program Files (x86)\\Tencent\\QQ\\Bin\\QQScLauncher.exe\"");

	system("pause");

	system("taskkill /f /im QQ.exe");

	system("pause");
}
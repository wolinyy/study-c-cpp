#include<stdlib.h>

void main()
{
	//没有start就是同步，一个一个打开，打开一个关闭一个

	/*system("notepad");
	system("notepad");
	system("notepad");*/

	//有start异步，就是并行打开
	system("start notepad");
	system("start notepad");
	system("start notepad");
}
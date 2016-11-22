#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
void main()
{
	int x = 0;
	printf("%x", &x);
	while (1)
	{
		char str[20];
		sprintf(str, "title µÚ%dÃë", x++);
		system(str);
		printf("\n%s", str);
		Sleep(1000);
	}
}
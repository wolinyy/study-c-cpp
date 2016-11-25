#include <stdio.h>
#include <stdarg.h>

void myPrint(char *fmt, ...)
{
	char str[4096];
	va_list arg_ptr;
	int nArgCout = 0;

	va_start(arg_ptr, fmt);
	vsprintf(str, fmt, arg_ptr);
	va_end(arg_ptr);

	printf("%s\n", str);
}

void main()
{
	myPrint("hello %s!!! %d", "world", 123);
	system("pause");
}
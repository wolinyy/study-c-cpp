#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void main()
{
	MessageBoxA(0, "A我123", "A我123", 0); 
	//无论是多字节还有unicode ,我就是多字节

	MessageBoxW(0, L"W我123", L"W我123", 0);
	//无论是多字节还有unicode ,我就是unicode

	MessageBox(0, TEXT("AW我123"), TEXT("AW我123"), 0);
	//自动适应unicode或者多字节

	//MessageBox(0, L"我123", L"我123", 0);
	//使用多字节字符集   MessageBox(0, "我123", "我123", 0); 
	//	unicode		 MessageBox(0, L"我123", L"我123", 0); 
}
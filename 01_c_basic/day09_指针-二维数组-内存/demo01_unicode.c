#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void main()
{
	MessageBoxA(0, "A��123", "A��123", 0); 
	//�����Ƕ��ֽڻ���unicode ,�Ҿ��Ƕ��ֽ�

	MessageBoxW(0, L"W��123", L"W��123", 0);
	//�����Ƕ��ֽڻ���unicode ,�Ҿ���unicode

	MessageBox(0, TEXT("AW��123"), TEXT("AW��123"), 0);
	//�Զ���Ӧunicode���߶��ֽ�

	//MessageBox(0, L"��123", L"��123", 0);
	//ʹ�ö��ֽ��ַ���   MessageBox(0, "��123", "��123", 0); 
	//	unicode		 MessageBox(0, L"��123", L"��123", 0); 
}
_declspec(dllexport) void mm()
{
	int *p = (int *)0x2cfbf0; //p的值就是0x2cfbf0
	*p = 0;	 //根据地址赋值
}
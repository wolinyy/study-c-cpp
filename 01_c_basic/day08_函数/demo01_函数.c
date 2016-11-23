#include <stdlib.h>
#include <stdio.h>

int fab(int n)
{
	if(1 == n || 2 == n)
	{
		return 1;
	}
	else
	{
		return fab(n-1) + fab(n-2);
	}
}

int fab2(int n)
{
	int fabs[100] = {1, 1};
	int i = 2;
	for(;i<n;i++)
	{
		fabs[i] = fabs[i-1] + fabs[i-2];
	}
	return fabs[n-1];
}

int sum(int n)
{
	if(1 == n)
	{
		return 1;
	}
	else
	{
		return n + sum(n-1);
	}
}

void huiwen(char n)
{
	printf("%c", n);
	if(n == 'a')
	{
		return ;
	}

	huiwen(n-1);
	printf("%c", n);
}

void  goto2(int data)
{
	if (data==0)
	{
		return;
	}
	else
	{

		int x = data % 16;
		data /= 16;

		goto2(data);
		printf("%x", x);
	}
}

void main()
{
	huiwen('d');
	printf("\n");
	printf("%d\n", sum(1000));
	printf("%d\n", fab2(40));
	printf("%d\n", fab(40));
	goto2(20);
	system("pause");
}
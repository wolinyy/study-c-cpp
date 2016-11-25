#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a = 10;
	int b[10] ; //
	int c[4][5];
	char str[4][5];

	printf("sizeof(a):%d \n", sizeof(a)); 
	printf("sizeof a:%d \n", sizeof a );
	printf("sizeof(int *):%d \n", sizeof(int *));
	printf("sizeof(b):%d \n", sizeof(b));
	printf("sizeof(b[0]):%d \n", sizeof(b[0]));
	printf("sizeof(*b):%d \n", sizeof(*b));

	printf("sizeof(int [5]):%d \n", sizeof(int [5]));
	printf("sizeof(int [4][5]):%d \n", sizeof(int [4][5]));
	printf("sizeof(c):%d \n", sizeof(c));			// 80
	printf("sizeof(c+1):%d \n", sizeof(c+1));		// 4
	printf("sizeof(&c[1]):%d \n", sizeof(&c[1]));	// 4
	printf("sizeof(c[1]):%d \n", sizeof(c[1]));		// 20
	printf("sizeof(*(c+2)):%d \n", sizeof(*(c+2)));	// 20
	printf("sizeof(c[1]+1):%d \n", sizeof(c[1]+1));
	printf("sizeof(*(c+1)+1):%d \n", sizeof(*(c+1)+1));
	printf("sizeof(str):%d \n", sizeof(str));				// 20
	printf("sizeof(str+1):%d \n", sizeof(str+1));			// 4
	printf("sizeof(str[1]):%d \n", sizeof(str[1]));			// 5
	printf("sizeof(str[1]+1):%d \n", sizeof(str[1]+1));		// 4
	printf("sizeof(str[1][2]):%d \n", sizeof(str[1][2]));	// 1

	printf("hello.....\n");
	getchar();
	return 0;
}
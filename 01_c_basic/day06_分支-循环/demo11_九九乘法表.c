#include<stdio.h>
#include<stdlib.h>

void main全角()
{
	int i, j;

	printf("%s", " ");//间隔，对齐纵坐标
	for (i = 0; i < 10; i++)
	{
		printf("%7d", i);//打印横坐标
	}
	//换行
	printf("\n-----------------------------------------------\n");
	//外层循环每循环一次，内层循环会完整循环一次
	for (i = 0; i < 10; i++) //外层循环是竖
	{
		printf("%-5d", i);  //纵坐标
		for (j = 0; j < 10; j++) //内层循环是横
		{
			printf("%d*%d=%-3d",i,j, i*j);
		}
		printf("\n");
	}

	system("pause");
}
void main左下角()
{
	int i, j;

	printf("%s", " ");//间隔，对齐纵坐标
	for (i = 0; i < 10; i++)
	{
		printf("%7d", i);//打印横坐标
	}
	//换行
	printf("\n-----------------------------------------------\n");
	//外层循环每循环一次，内层循环会完整循环一次
	for (i = 0; i < 10; i++) //外层循环是竖
	{
		printf("%-5d", i);  //纵坐标
		for (j = 0; j < 10; j++) //内层循环是横
		{

			if (i>=j)
			{
				printf("%d*%d=%-3d", i, j, i*j);
			}
			
		}
		printf("\n");
	}

	system("pause");
}

  
void main右上角()
{
	int i, j;

	printf("%s", " ");//间隔，对齐纵坐标
	for (i = 0; i < 10; i++)
	{
		printf("%7d", i);//打印横坐标
	}
	//换行
	printf("\n-----------------------------------------------\n");
	//外层循环每循环一次，内层循环会完整循环一次
	for (i = 0; i < 10; i++) //外层循环是竖
	{
		printf("%-5d", i);  //纵坐标
		for (j = 0; j < 10; j++) //内层循环是横
		{

			if (i <= j)
			{
				printf("%d*%d=%-3d", i, j, i*j);
			}
			else
			{
				printf("%7s", "");
			}

		}
		printf("\n");
	}

	system("pause");
}


void main左上角()
{
	int i, j;
	printf("%s", " ");//间隔，对齐纵坐标
	for (i = 0; i < 10; i++)
	{
		printf("%7d", i);//打印横坐标
	}
	//换行
	printf("\n-----------------------------------------------\n");
	//外层循环每循环一次，内层循环会完整循环一次
	for (i = 0; i < 10; i++) //外层循环是竖
	{
		printf("%-5d", i);  //纵坐标
		for (j = 0; j < 10; j++) //内层循环是横
		{

			if (i <= 9-j)
			{
				printf("%d*%d=%-3d", i, j, i*j);
			}
			else
			{
				printf("%7s", "");
			}

		}
		printf("\n");
	}

	system("pause");
}

void main右下角()
{
	int i, j;
	printf("%s", " ");//间隔，对齐纵坐标
	for (i = 0; i < 10; i++)
	{
		printf("%7d", i);//打印横坐标
	}
	//换行
	printf("\n-----------------------------------------------\n");
	//外层循环每循环一次，内层循环会完整循环一次
	for (i = 0; i < 10; i++) //外层循环是竖
	{
		printf("%-5d", i);  //纵坐标
		for (j = 0; j < 10; j++) //内层循环是横
		{

			if (i >= 9 - j)
			{
				printf("%d*%d=%-3d", i, j, i*j);
			}
			else
			{
				printf("%7s", "");
			}

		}
		printf("\n");
	}

	system("pause");
}


void main对角线()
{
	int i, j;
	printf("%s", " ");//间隔，对齐纵坐标
	for (i = 0; i < 10; i++)
	{
		printf("%7d", i);//打印横坐标
	}
	//换行
	printf("\n-----------------------------------------------\n");
	//外层循环每循环一次，内层循环会完整循环一次
	for (i = 0; i < 10; i++) //外层循环是竖
	{
		printf("%-5d", i);  //纵坐标
		for (j = 0; j < 10; j++) //内层循环是横
		{

			if ( i==j || i==9-j)
			{
				printf("%d*%d=%-3d", i, j, i*j);
			}
			else
			{
				printf("%7s", "");
			}

		}
		printf("\n");
	}

	system("pause");
}

void main左三角()
{
	int i, j;
	printf("%s", " ");//间隔，对齐纵坐标
	for (i = 0; i < 10; i++)
	{
		printf("%7d", i);//打印横坐标
	}
	//换行
	printf("\n-----------------------------------------------\n");
	//外层循环每循环一次，内层循环会完整循环一次
	for (i = 0; i < 10; i++) //外层循环是竖
	{
		printf("%-5d", i);  //纵坐标
		for (j = 0; j < 10; j++) //内层循环是横
		{

			if (i >=j && i <= 9 - j)
			{
				printf("%d*%d=%-3d", i, j, i*j);
			}
			else
			{
				printf("%7s", "");
			}

		}
		printf("\n");
	}

	system("pause");
}

void main右三角()
{
	int i, j;
	printf("%s", " ");//间隔，对齐纵坐标
	for (i = 0; i < 10; i++)
	{
		printf("%7d", i);//打印横坐标
	}
	//换行
	printf("\n-----------------------------------------------\n");
	//外层循环每循环一次，内层循环会完整循环一次
	for (i = 0; i < 10; i++) //外层循环是竖
	{
		printf("%-5d", i);  //纵坐标
		for (j = 0; j < 10; j++) //内层循环是横
		{

			if (i <= j && i >= 9 - j)
			{
				printf("%d*%d=%-3d", i, j, i*j);
			}
			else
			{
				printf("%7s", "");
			}

		}
		printf("\n");
	}

	system("pause");
}


void main上三角()
{
	int i, j;
	printf("%s", " ");//间隔，对齐纵坐标
	for (i = 0; i < 10; i++)
	{
		printf("%7d", i);//打印横坐标
	}
	//换行
	printf("\n-----------------------------------------------\n");
	//外层循环每循环一次，内层循环会完整循环一次
	for (i = 0; i < 10; i++) //外层循环是竖
	{
		printf("%-5d", i);  //纵坐标
		for (j = 0; j < 10; j++) //内层循环是横
		{

			if (i <= j && i <= 9 - j)
			{
				printf("%d*%d=%-3d", i, j, i*j);
			}
			else
			{
				printf("%7s", "");
			}

		}
		printf("\n");
	}

	system("pause");
}

void main下三角()
{
	int i, j;
	printf("%s", " ");//间隔，对齐纵坐标
	for (i = 0; i < 10; i++)
	{
		printf("%7d", i);//打印横坐标
	}
	//换行
	printf("\n-----------------------------------------------\n");
	//外层循环每循环一次，内层循环会完整循环一次
	for (i = 0; i < 10; i++) //外层循环是竖
	{
		printf("%-5d", i);  //纵坐标
		for (j = 0; j < 10; j++) //内层循环是横
		{

			if (i >= j && i >= 9 - j)
			{
				printf("%d*%d=%-3d", i, j, i*j);
			}
			else
			{
				printf("%7s", "");
			}

		}
		printf("\n");
	}
	system("pause");
}
void main()
{
	main全角();
	printf("\n");
	main左下角();
	printf("\n");
	main右上角();
	printf("\n");
	main左上角();
	printf("\n");
	main右下角();
	printf("\n");
	main对角线();
	printf("\n");
	main左三角();
	printf("\n");
	main右三角();
	printf("\n");
	main上三角();
	printf("\n");
	main下三角();
}
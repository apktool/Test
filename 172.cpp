// 172.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define M 3
#define N 3
#define R 3
#include"stdio.h"
void main()
{
	int i, j, k;
	int a[M][N][R];
	printf_s("Please input the array: ");
	for (i = 0; i < M; i++)
	{
		for ( j = 0; j < N; j++)
		{
			for (k = 0; k < R; k++)
			{
				scanf_s("%4d", &a[i][j][k]);
			}
		}
	}
	printf_s("\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			for (k = 0; k < R; k++)
			{
				printf_s("a[%d][%d][%d] = %2d\n", i, j, k, a[i][j][k]);
			}
		}
	}
}

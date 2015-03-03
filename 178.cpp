// 178.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define M 4
#define N 3
#include"stdio.h"
void main()
{
	int i, j, e;
	int a[M][N] = { 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	printf_s("Befor:\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf_s("%4d", a[i][j]);
		}
		printf_s("\n");
	}
	printf_s("\nAfter\n");
	for (i = 0; i < M; i++)
	{
		e = a[i][0];
		for (j = 1; j < N; j++)
		{
			if (e < a[i][j])
			{
				e = a[i][j];
			}
		}
		printf_s("\nThe max number is %d", e);
	}
	printf_s("\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf_s("%4d", a[i][j]);
		}
		printf_s("\n");
	}
}
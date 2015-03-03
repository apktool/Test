// 174.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include"stdio.h"
void main()
{
	int i, j, k;
	int a[N][N];
	for (i = 0; i < N; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < N; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < N; i++)
	{
		for (k = i; k < N; k++)
		{
			printf_s("  ");
		}
		for (j = 0; j < i; j++)
		{
			printf_s("%4d", a[i][j]);
		}
		printf_s("\n");
	}
}
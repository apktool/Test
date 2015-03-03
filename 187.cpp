// 187.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 5
#include"stdio.h"
void main()
{
	int i, j, m = 1;
	int a[N][N] = { 0 };
	for (i = 0; i < N / 2; i++)
	{
		for (j = i; j <= N - 1 - i; j++)
		{
			a[i][j] = m++;
		}
		for (j = i + 1; j <= N - 1 - i; j++)
		{
			a[j][N - 1 - i] = m++;
		}
		for (j = N - 2 - i; j >= i; j--)
		{
			a[N - 1 - i][j] = m++;
		}
		for (j = N - 2 - i; j >= i + 1; j--)
		{
			a[j][i] = m++;
		}
	}
	if ((N - 1) % 2 == 0)
	{
		a[N / 2][N / 2] = N*N;
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf_s("%4d", a[i][j]);
		}
		printf_s("\n");
	}
}

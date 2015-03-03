// 186.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 4
#include"stdio.h"
void main()
{
	int i, j, k;
	int no = 1;
	int a[N][N] = { 0 };
	for (k = 0; k < N; k++)
	{
		if (k % 2 == 0)
		{
			for (i = 0; i <= k; i++)
			{
				a[i][k - i] = no++;
			}
		}
		else
		{
			for (i = k; i>=0; i--)
			{
				a[i][k - i] = no++;
			}
		}
	}
	for (k = N; k < (2 * N); k++)
	{
		if (k % 2 == 0)
		{
			for (i = k - N + 1; i < N; i++)
			{
				a[i][k - i] = no++;
			}
		}
		else
		{
			for (i = N - 1; i > k - N; i--)
			{
				a[i][k - i] = no++;
			}
		}
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
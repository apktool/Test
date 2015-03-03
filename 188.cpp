// 188.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 5
#include"stdio.h"
int array0(int a[][N],int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf_s("%4d", a[i][j]);
		}
		printf_s("\n");
	}
	return 1;
}
void main()
{
	int i = 0, j;
	int a[N][N] = { 0 };
	j = N / 2;
	for (int m = 1; m <= N*N; m++)
	{
		a[i][j] = m;
		if (m%N == 0)
		{
			i += 1;
			continue;
		}
		i = i - 1;
		j = j + 1;
		if (i == -1)
		{
			i = i + N;
		}
		else if (j == N)
		{
			j = j - N;
		}
	}
	array0(a, N);
}
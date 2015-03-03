// 176.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define M 4
#define N 3
#define P 5
#include"stdio.h"
void main()
{
	int i, j, k;
	int a[M][N] = { 34, 78, 90, 76, 81, 98, 63, 68, 93, 45, 61, 70 };
	int b[N][P] = { 80, 56, 60, 70, 61, 72, 70, 89, 76, 49, 76, 82, 56, 78, 90 };
	int c[M][P] = { 0 };
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < P; j++)
		{
			for (k = 0; k < N; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
			printf_s("%d\t", c[i][j]);
		}
		printf_s("\n");
	}
}
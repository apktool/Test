// 256.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define M 4
#define N 3
void arraymax(int(*)[N], int);
void output(int(*)[N], int);
void main()
{
	int ss[M][N] = { 1, 12, 3, 14, 5, 16, 7, 8, 9, 2, 13, 4 };
	output(ss, M);
	arraymax(ss, M);
}
void arraymax(int(*p)[N], int m)
{
	int i, j;
	int max, pos;
	for (i = 0; i < m; i++)
	{
		max = **(p + i);
		for (j = 0; j < N; j++)
		{
			if (max < *(*(p + i) + j))
			{
				max = *(*(p + i) + j);
				pos = j;
			}
		}
		printf_s("%d line %d vertail %3d\n", i, pos, max);
	}
}
void output(int (*q)[N], int m)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf_s("%5d", *(*(q + i) + j));
		}
		printf_s("\n");
	}
}
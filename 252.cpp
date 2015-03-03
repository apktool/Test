// 252.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define M 3
#define N 4
#include"stdio.h"
void main()
{
	int a[M][N] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
	int i, j;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf_s("Output address: %x; Output vaule %d\n", a[i] + j, *(*(a + i) + j));
		}
	}
}
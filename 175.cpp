// 175.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 3
#include"stdio.h"
void main()
{
	int i, j;
	int a[N][N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf_s("%2d", a[i][j]);
		}
		printf_s("\n");
	}
	printf_s("\n\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf_s("%2d", a[j][i]);
		}
		printf_s("\n");
	}

}
// 173.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define M 5
#include"stdio.h"
void main()
{
	int i, j, e = 2;
	int a[M][M] = { 0 };
	for (i = 0; i < M; i++)
	{
		for (j = 0; j <= i; j++)
		{
			a[i][j] = e;
			e += 2;
		}
	}
	for ( i = 0; i < M; i++)
	{
		for ( j = 0; j < M; j++)
		{
			printf_s("%3d", a[i][j]);
		}
		printf_s("\n");
	}
}
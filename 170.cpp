// 170.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 2
#define M 3
#include"stdio.h"
void main()
{
	int i, j;
	int a[N][M];
	printf_s("Please input the score :");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			scanf_s("%d",&a[i][j]);
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf_s("%4d", a[i][j]);
		}
		printf_s("\n");
	}
}
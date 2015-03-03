// 262.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define M 4
#define N 3
#include"stdio.h"
void main()
{
	int a[M][N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int *p[M] = { a[0], a[1], a[2], a[3] };
	int i;
	for (i = 0; i < M; i++)
	{
		printf_s("%5d  %5d  %5d\n", *(p[i] + 0), *(p[i] + 1), *(p[i] + 2));
	}
}
// 179.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 6
#include"stdio.h"
void main()
{
	int i, j;
	int a[N] = { 0 };
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			a[j] = a[i] + 1;
			printf_s("%4d", a[i]);
		}
		printf_s("\n");
	}
}
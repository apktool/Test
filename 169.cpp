// 169.cpp : 定义控制台应用程序的入口点。
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
	int i, e, a[N] = { 1, 2, 5, 4 };
	printf_s("\nThe orgal is :\n\t");
	for (i = 0; i < N; i++)
	{
		printf_s("%4d", a[i]);
	}
	for (i = 0; i < N; i++)
	{
		a[i] += 5;
		a[i] %= 10;
	}
	for (i = 0; i < N/2; i++)
	{
		e = a[i];
		a[i] = a[N - 1 - i];
		a[N - 1 - i] = e;
	}
	printf_s("\nThe final array is :\n\t");
	for (i = 0; i < N; i++)
	{
		printf_s("%4d", a[i]);
	}
	printf_s("\n");
	getchar();
}
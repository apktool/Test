// 168.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include"stdio.h"
void main()
{
	int i, x;
	int a[N];
	printf_s("Please input the array: ");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf_s("\n");
	for (i = 0; i < N / 2; i++)
	{
		x = a[i];
		a[i] = a[N - 1 - i];
		a[N - 1 - i] = x;
	}
	for (i = 0; i < N; i++)
	{
		printf_s("%4d", a[i]);
	}
}
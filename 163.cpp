// 163.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 5
#include "stdio.h"
void main()
{
	int i, j, x;
	int a[N];
	printf_s("Please input the array : ");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
		printf_s("%4d", a[i]);
	}
	printf_s("\n");
	for (i = 0; i < N; i++)
	{
		x = a[0];
		for (j = 1; j < N; j++)
		{
			a[j - 1] = a[j];
		}
		a[N - 1] = x;
		for (j = 0; j < N; j++)
		{
			printf_s("%4d", a[j]);
		}
		printf_s("\n");
	}
}
// 165.cpp : 定义控制台应用程序的入口点。
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
	int i, j;
	int e, x;
	int a[N + 1];
	printf_s("Please input the array: ");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < N - 1; i++)
	{
		for (j = 1; j < N; j++)
		{
			if (a[j - 1]>a[j])
			{
				e = a[j - 1];
				a[j - 1] = a[j];
				a[j] = e;
			}
		}
	}
	printf_s("\n");
	for (i = 0; i < N; i++)
	{
		printf_s("%4d", a[i]);
	}
	printf_s("\n\nPlease input the number: ");
	scanf_s("%d", &x);
	for (i = 0; i < N; i++)
	{
		if (a[i]>x)
		{
			break;
		}
	}
	if (i < N)
	{
		for (j = N - 1; j >= i; j--)
		{
			a[j + 1] = a[j];
		}
		a[i] = x;
	}
	printf_s("\n");
	for (i = 0; i < N + 1; i++)
	{
		printf_s("%4d", a[i]);
	}
}
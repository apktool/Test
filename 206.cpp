// 206.cpp : 定义控制台应用程序的入口点。

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 21
#include"stdio.h"
void josef(int a[N], int n, int m)
{
	int i, j, k = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < m; j++)
		{
			while (a[k] == 0)
			{
				k = (k + 1) % n;
			}
			k = (k + 1) % n;
		}
		while (a[k] == 0)
		{
			k = (k + 1) % n;
		}
		printf_s("%3d", a[k]);
		a[k] = 0;
	}
	/*for (i = 0; i < n; i++)
	{
		j = 1;
		while (j < m)
		{
			while (a[k] == 0)
			{
				k = (k + 1) % n;
			}
			j++;
			k = (k + 1) % n;
		}
		while (a[k] == 0)
		{
			k = (k + 1) % n;
		}
		printf_s("%3d", a[k]);
		a[k] = 0;
	}*/
}
void main()
{
	int i, n, m;
	int a[N] = { 0 };
	printf_s("Please input n and m: ");
	scanf_s("%d%d", &n, &m);
	for (i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
	josef(a, n, m);
	printf_s("\n");
}
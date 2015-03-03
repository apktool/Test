// 154.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include "stdio.h"
void main()
{
	int i, j, k, e;
	int a[N] = {};
	printf_s("Please input array: ");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < N - 1; i++)
	{
		k = i;
		for (j = i + 1; j < N; j++)
		{
			if (a[k]>a[j])
			{
				k = j;
			}
		}
		if (k != i)
		{
			e = a[k];
			a[k] = a[i];
			a[i] = e;
		}
	}
	printf_s("\nThe array is :");
	for (i = 0; i < N; i++)
	{
		printf_s("%4d",a[i]);
	}
}
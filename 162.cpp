// 162.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 8
#define M 5
#define K 20

#include"stdio.h"
void main()
{
	int i, j, k = 0;
	int a[N], b[M], c[K];
	printf_s("\nPlease input the array A: ");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf_s("\nPlease input the array B: ");
	for (j = 0; j < M; j++)
	{
		scanf_s("%d", &b[j]);
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (a[i] == b[j])
			{
				break;
			}
		}
		if (j == M)
		{
			c[k++] = a[i];
		}
	}
	printf_s("\nThe array C: ");
	for (i = 0; i < k; i++)
	{
		printf_s("%4d", c[i]);
	}
	printf_s("\n\n");
	getchar();
}
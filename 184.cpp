// 184.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 5
#include"stdio.h"
void main()
{
	int i, j, k = 0;
	int flag = 1, s[N*N] = { 0 };
	/*int a[N][N];
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}*/
	int a[N][N] = { 1, 2, 3, 4, 5, 2, 1, 6, 7, 8, 3, 6, 1, 9, 0, 4, 7, 9, 1, 10, 5, 8, 0, 10, 1 };
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf_s("%4d", a[i][j]);
		}
		printf_s("\n");
	}
	for (i = 0; i < N && flag; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (a[i][j] != a[j][i])
			{
				flag = 0;
				break;
			}
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j <= i; j++)
		{
			s[k++] = a[i][j];
		}
	}
	if (flag == 0)
	{
		printf_s("\nThe array isn't D");
	}
	else
	{
		printf_s("\nThe array is D");
		for (k = 0; k < (N*(N + 1) / 2); k++)
		{
			printf_s("%4d", s[k]);
		}
	}
	printf_s("\n");
}
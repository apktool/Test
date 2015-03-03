// 164.cpp : 定义控制台应用程序的入口点。
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
	int i, j, k = 0;
	int x;
	int a[N], c[N];
	printf_s("\nPlease input the array : ");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < N; i++)
	{
		for (j = 2; j < a[i]; j++)
		{
			if (a[i] % j == 0)
			{
				break;
			}
		}
		if (j == a[i])
		{
			c[k++] = a[i];
		}
	}
	for (i = 0; i < k - 1; i++)
	{
		for (j = 1; j < k; j++)
		{
			if (c[j - 1]>c[j])
			{
				x = c[j - 1];
				c[j - 1] = c[j];
				c[j] = x;
			}
		}
	}
	printf_s("\n");
	for (i = 0; i < k; i++)
	{
		printf_s("%4d", c[i]);
	}
	printf_s("\n");
	getchar();

}
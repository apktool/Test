// 167.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 101
#include "stdio.h"
#include "math.h"
void main()
{
	int i, j, counter = 0;
	int a[N];
	for (i = 1; i < N; i++)
	{
		a[i] = i;
	}
	for (i = 2; i < sqrt((float)N); i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (a[i] != 0 && a[j] != 0)
			{
				if (a[j] % a[i] == 0)
				{
					a[j] = 0;
				}
			}
		}
	}
	for (i = 2; i < N; i++)
	{
		if (a[i] != 0)
		{
			printf_s("%4d", a[i]);
			counter++;
		}
		if (counter % 13 == 0)
		{
			printf_s("\n");
		}
	}
	printf_s("\n\n");
}
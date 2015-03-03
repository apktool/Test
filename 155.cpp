// 155.cpp : 定义控制台应用程序的入口点。
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
	int i, j, e;
	//int flag = 0;
	int a[N] = {};
	printf_s("Please input array: ");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 1; i < N; i++)
	{
		for (j = 0; j < N - 1; j++)
		{
			if (a[j]>a[j+1])
			{
				e = a[j];
				a[j] = a[j+1];
				a[j+1] = e;
			}
		}
	}
	printf_s("\n");
	for (i = 0; i < N; i++)
	{
		printf_s("%4d", a[i]);
	}
}
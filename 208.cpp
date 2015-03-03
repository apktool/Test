// 208.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include"stdio.h"
void arrange(int a[],int n)
{
	int i = 0, j = n - 1, x;
	while (i < j)
	{
		while (i < j&&a[i] > 0)
		{
			i++;
		}
		while (i < j&&a[j] < 0)
		{
			j--;
		}
		if (i < j)
		{
			x = a[i];
			a[i] = a[j];
			a[j] = x;
		}
	}
}
void show(int a[])
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf_s("%4d", a[i]);
	}
}
void main()
{
	int i, j;
	int a[N] = { 5, 9, -1, 7, -5, 8, 2, 4, -3, 0 };
	printf_s("The origal array is :");
	show(a);
	printf_s("\n");
	arrange(a, N);
	printf_s("The final array is  :");
	show(a);
	printf_s("\n");
}
// 245.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include"stdio.h"
void inverse(int *pa, int n)
{
	int temp, *p, *q;
	for (p = pa, q = pa + n - 1; p < q; p++, q--)
	{
		temp = *p;
		*p = *q;
		*q = temp;
	}
}
void print(int *pa)
{
	int *p;
	for (p = pa; p < pa + N; p++)
	{
		printf_s("%d  ", *p);
	}
}
void main()
{
	int a[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf_s("The orgial array:");
	print(a);
	inverse(a, N);
	printf_s("\nThe final array:");
	print(a);
}
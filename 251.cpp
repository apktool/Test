// 251.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include"stdio.h"
void ave(int *a, int *b, int n)
{
	int *p, *q = b;
	for (p = a; p < a + n - 1; p++)
	{
		*q++ = *p*(*p + 1);
	}
}
void main()
{
	int a[N], b[N - 1];
	int *p;
	printf_s("Input data: ");
	for (p = a; p < a + N; p++)
	{
		scanf_s("%d", p);
	}
	ave(a, b, N);
	printf_s("Output data: ");
	for (p = b; p < b + N - 1; p++)
	{
		printf_s("%d ", *p);
	}
	printf_s("\n");
}
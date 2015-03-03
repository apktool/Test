// 209.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define M 5
#define N 10
#include"stdio.h"
void printf1(int a[], int m)
{
	for (int i = 0; i < M; i++)
	{
		printf_s("%4d", a[i]);
	}
}
void printf2(int b[], int n)
{
	for (int j = 0; j < N; j++)
	{
		printf_s("%4d", b[j]);
	}
}
void rearrange(int a[], int b[], int m, int n)
{
	int i, j, x;
	while (a[m - 1]>b[0])
	{
		x = a[m - 1];
		a[m - 1] = b[0];
		j = 1;
		while (j < n && b[j] < x)
		{
			b[j - 1] = b[j++];
		}
		b[j - 1] = x;
		x = a[m - 1];
		i = m - 2;
		while (i >= 0 && a[i] > x)
		{
			a[i + 1] = a[i--];
		}
		a[i + 1] = x;
	}
}
void main()
{
	int a[M] = { 3, 5, 12, 28, 29 };
	int b[N] = { 1, 4, 7, 9, 22, 30, 35, 45, 60, 71 };
	printf_s("\nThe orrgial a[i]:");
	printf1(a, M);
	printf_s("\nThe orrgial b[j]:");
	printf2(b, N);
	rearrange(a, b, M, N);
	printf_s("\nThe final   a[i]:");
	printf1(a, M);
	printf_s("\nThe final   b[j]:");
	printf2(b, N);
	printf_s("\n");
}
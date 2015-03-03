// 246.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include"stdio.h"
void move(int *pa, int m, int n)
{
	int *p, *q;
	int temp;
	for (p = pa + n - m; p < pa + n; p++)
	{
		temp = *p;
		for (q = p - 1; q > p - (n - m); q--)
		{
			*(q + 1) = *q;
		}
		*q=temp;
	}
}
void main()
{
	int number[N] = { 10, 11, 9, 12, 7, 15, 8, 14, 3, 13 };
	int m, i;
	for (i = 0; i < N; i++)
	{
		printf_s("%d  ", number[i]);
	}
	printf_s("\nPlease input m: ");
	scanf_s("%d", &m);
	move(number, m, N);
	for (i = 0; i < N; i++)
	{
		printf_s("%d  ", number[i]);
	}
}
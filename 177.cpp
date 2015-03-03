// 177.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 4
#include"stdio.h"
void main()
{
	int i, s = 0;
	int a[N][N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	for (i = 0; i < N; i++)
	{
		s += a[i][i];
		s += a[N - 1 - i][i];
	}
	if (N % 2 != 0)
	{
		s -= a[N / 2][N / 2];
	}
	printf_s("\nThe sum is : %d", s);

}
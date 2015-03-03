// 255.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define M 4
#define N 3
#include"stdio.h"
int maxarray(int *, int, int *);
void main()
{
	int ss[M][N] = { 1, 12, 3, 14, 5, 16, 7, 8, 9, 2, 13, 4 };
	int max, pos;
	max = maxarray(*ss, M*N, &pos);
	printf_s("The best number is %d, The postion is %d", max, pos);
	getchar();
}
int maxarray(int *p, int n, int *pos)
{
	int *max, *q;
	max = p;
	for (q = p + 1; q < p + n; q++)
	{
		if (*max < *q)
		{
			max = q;
		}
	}
	*pos = max - p;
	return *max;
}
// 182.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define M 3
#define N 4
void main()
{
	int i, j, k, maxj, mink;
	int a[M][N] = { 80, 79, 56, 98, 48, 80, 69, 54, 46, 68, 40, 60 };
	int max[M], min[N];
	int flag0 = 0, flag1;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf_s("%4d", a[i][j]);
		}
		printf_s("\n");
	}
	for (i = 0; i < M; i++)
	{
		max[i] = a[i][0];
		for (j = 0; j < N; j++)
		{
			if (max[i] < a[i][j])
			{
				max[i] = a[i][j];
				maxj = j;
				for (k = 0, flag1 = 1; k < M; k++)
				{
					min[i] = max[i];
					if (min[i] > a[k][maxj])
					{
						min[i] = a[k][maxj];
						mink = k;
						flag1 = 0;
					}
				}
			}
		}
	}
	if (flag1 == 1)
	{
		printf_s("\nThe array have number !");
		printf_s(" The number is (%d,%d) --> %d", mink + 1, maxj + 1, a[mink][maxj]);
	}
	else
	{
		printf_s("\nThe array have no number !");
	}
	printf_s("\n\n");
}
// 180.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define M 5
#define N 6
#include"stdio.h"
void main()
{
	int i, j;
	int minh[M], minl[N];
	int a[M][N] = { 60, 86, 59, 71, 82, 90, 65, 87, 59, 81, 90, 93, 61, 73, 86, 70, 91, 53, 90, 87, 74, 65, 54, 34, 67, 55, 48, 70, 98, 76 };
	printf_s("The origial array : \n");
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
		minh[i] = a[i][0];
		for (j = 1; j < N; j++)
		{
			if (minh[i] > a[i][j])
			{
				minh[i] = a[i][j];
			}
		}
		printf_s("The %d th horizontal line most smallest vale is %d", i + 1, minh[i]);
		printf_s("\n");
	}
	printf_s("\n");
	for (j = 0; j < N; j++)
	{
		minl[j] = a[0][j];
		for (i = 0; i < M; i++)
		{
			if (minl[j]>a[i][j])
			{
				minl[j] = a[i][j];
			}
		}
		printf_s("The %d th vertical line most smallest vale is %d", j + 1, minl[j]);
		printf_s("\n");
	}
}
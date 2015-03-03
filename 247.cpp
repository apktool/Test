// 247.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include"stdio.h"
void sum(float *p, int n, float *pe, float *po)
{
	int i;
	*pe = *po = 0;
	for ( i = 0; i < n; i++)
	{
		if (i % 2)
		{
			*po += *(p + i);
		}
		else
		{
			*pe += *(p + i);
		}
	}
	
}
void main()
{
	float a[N] = { 3.2, 3.7, 2.5, 7.8, 8.6, 5.1, 6.4, 7.9, 4.9, 6.2 };
	float even, odd;
	sum(a, N, &even, &odd);
	printf_s("The even sum: %.2f", even);
	printf_s("\nThe odd sum : %.2f", odd);
}
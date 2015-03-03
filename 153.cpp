// 153.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
#define N 10
void main()
{
	int i, j, max;
	int a[N] = {};
	printf_s("Please input the array：");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	max = a[0];
	for (i = 1; i < N; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			j = i;
		}
		else
			continue;
	}
	a[j] = a[i - 1];
	a[i - 1] = max;
	
	for (i = 0; i < N; i++)
	{
		printf_s("%d ", a[i]);
	}
	getchar();
}
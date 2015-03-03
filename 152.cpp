// 152.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 20
void main()
{
	int i;
	int a[N] = { 1, 1 };
	for (i = 2; i < N; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	for (i = 0; i < N; i++)
	{
		if (i % 5 == 0)
		{
			printf_s("\n");
		}
		printf_s("%5d\t",a[i]);
	}
	getchar();
}
// 149.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}


#define N 10
#include "stdio.h"
void main()
{
	int a[N];
	int i;
	a[0] = 10, a[1] = 15;
	for (i = 2; i < N; i++)
	{
		a[i] = 20;
	}
	for (i = 0; i < N;i++)
	{
		printf_s("%3d", a[i]);
	}
	getchar();
}
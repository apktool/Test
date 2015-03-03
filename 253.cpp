// 253.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define M 3
#define N 4
#include"stdio.h"
void main()
{
	int a[M][N], *p;
	float ave = 0;
	printf_s("Input data to a: ");
	for (p = *a; p < *a + M*N; p++)
	{
		scanf_s("%d", p);
		ave += *p;
	}
	ave /= M*N;
	printf_s("Output data to a:");
	for (p = *a; p < *a + M*N; p++)
	{
		printf_s("%3d", *p);
	}
	printf_s("\nthe average is %.2f", ave);
	printf_s("\n");
}
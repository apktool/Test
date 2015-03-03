// 150.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

//a[] <==> math
//b[] <==> english
#define N 10
void main()
{
	int a[10] = { 10, 15, 20 };
	int b[] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 10 };
	int i;
	for (i = 3; i < N; i++)
	{
		scanf_s("%d ", &a[i]);
	}
	for (i = 0; i < N; i++)
	{
		printf_s("%d\t%d\n", a[i], b[i]);
	}
	getchar();
}
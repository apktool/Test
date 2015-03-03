// 166.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include"stdio.h"
void main()
{
	int i;
	int a[N];
	printf_s("Please input the array: ");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < N; i++)
	{
		if (a[i] == 3)
			break;
	}
	if (i <= N)
	{
		printf_s("Number 3 is in the array! It's inputed in %d th.",i+1);
	}
	else
	{
		printf_s("Number 3 isn't in the array!");
	}
	getchar();
}
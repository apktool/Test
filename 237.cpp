// 237.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int a, b, c;
	int *pmax, *pmin;
	printf_s("Please input a, b, c: ");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		pmax = &a;
		pmin = &b;
	}
	else
	{
		pmax = &b;
		pmin = &a;
	}
	if (c > *pmax)
	{
		pmax = &c;
	}
	else
	{
		pmin = &c;
	}
	printf_s("max=%d\nmin=%d\n", *pmax, *pmin);
}
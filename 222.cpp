// 222.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
int maxn(int a[], int n)
{
	int m, x;
	if (n == 1)
	{
		x = a[n - 1];
		return x;
	}
	else
	{
		m = maxn(a, n - 1);
		x = m > a[n - 1] ? m : a[n - 1];
		return x;
	}
}
void main()
{
	int a[10] = { 20, 30, 15, 4, 7, 9, 11, 23, 67 };
	int i, m;
	m = maxn(a, 10);
	printf_s("The max is %d  ", m);
}
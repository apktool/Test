// 221.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
int gcd(int m, int n)
{
	int x;
	if (n == 0)
	{
		x = m;
	}
	else
	{
		x = gcd(n, m%n);
	}
	return x;
}
void main()
{
	int a, b, t, x;
	printf_s("Please input a and b :");
	scanf_s("%d%d", &a, &b);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	x = gcd(a, b);
	printf_s("The gcb is %d", x);
}
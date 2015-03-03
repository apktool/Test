// 220.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
int fact(int n)
{
	int x;
	if (n == 0 || n == 1)
	{
		x = 1;
	}
	else
	{
		x = n*fact(n - 1);
	}
	return x;
}
void main()
{
	int n = 5;
	n = fact(n);
	printf_s("n! = %d", n);
	printf_s("\n");
}
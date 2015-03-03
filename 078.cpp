// 078.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int m, n;
	int r, t;
	printf_s("please input two number:");
	scanf_s("%d%d", &m, &n);
	if (m < n)
	{
		t = m;
		m = n;
		n = t;
	}
	r = m%n;
	while (r != 0)
	{
		m = n;
		n = r;
		r = m%n;
	}
	printf_s("The aver number is %d", n);
	getchar();
}
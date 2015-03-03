// 104.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

//1!+2!+3!+4!+5!+6!+......+n!

#include"stdio.h"
void main()
{
	int i;
	int sum = 0,t=1;
	int n;
	printf_s("No. = ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		t = t*i;
		sum = sum + t;
	}
	printf_s("Sum = %d", sum);
	getchar();
}
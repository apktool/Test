// 112.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int i, j, n, a;
	int sum = 0;
	printf_s("Please input n:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a = 1;
		for (j = 1; j <= i; j++)
		{
			a = a*i;
			
		}
		sum = sum + a;
	}
	printf_s("%d\n", a);
	printf_s("%d", sum);
	getchar();
	getchar();
}
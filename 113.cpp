// 113.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

void main()
{
	int i = 1, sum = 0;
	int n, j;
	printf_s("Please input n:");
	scanf_s("%d", &n);
	do
	{
		i++;
		j = i*i*i;
		sum = sum + j;
		
	} while (sum < n);
	printf_s("%d", i-1);
	getchar();
	getchar();
}
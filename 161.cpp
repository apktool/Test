// 161.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 5
#include"stdio.h"
void main()
{
	int a[N] = {};
	int i = 0, j;
	int x;
	printf_s("Please input the array: ");
	scanf_s("%d", &x);
	do
	{
		a[i] = x % 10;
		x /= 10;
		i++;
	} while (x != 0);
	for (i = 0, j = N - 1; i < j; i++, j--)
	{
		if (a[i] != a[j])
			break;
	}
	if (i < j)
	{
		printf_s("\nThe number is not huiwen No.");
	}
	else
	{
		printf_s("\nThe nunber is huiwen No.");
	}
}
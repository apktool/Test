// 156.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include "stdio.h"
void main()
{
	int a[N + 1] = {};
	int i, j, x;
	int flag;
	printf_s("Please input array: ");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf_s("\n");
	printf_s("Please input the nunber: ");
	scanf_s("%d", &x);
	for (i = 0; i < N; i++)
	{
		if (a[i]==x)
		{
			flag = 1;
			break;
		}
		else if (a[i]>x)
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		printf_s("\n The number is found.");
		printf_s("It is in %d th", i + 1);
	}
	else
	{
		printf_s("\n The number is not found! It will insert array.");
		for (j = N ; j > i; j--)
		{
			a[j] = a[j - 1];
		}
		a[i] = x;
		printf_s("\n");
		for (i = 0; i < N + 1; i++)
		{
			printf_s("%4d", a[i]);
		}
	}
	printf_s("\n");
	getchar();
 
}
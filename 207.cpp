// 207.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
void platform(int a[N], int n)
{
	int k, i = 0, j = 0, len = 1;
	while (i < n - 1)
	{
		while (i < n - 1 && a[i] == a[i + 1])
		{
			i++;
		}
		if (len < i - j + 1)
		{
			len = i - j + 1;
			k = j;
		}
		i++; 
		j = i;
	}
	printf_s("The plat's from %d, toal length is %d\n", k, len);
}
void main()
{
	int i;
	int a[N] = { 5, 7, 2, 2, 5, 9, 9, 9, 1, 0 };
	platform(a, N);
}
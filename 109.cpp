// 109.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

void main()
{
	int a, x, n, sum=0;
	int b ;
	printf_s("Please input the 'a' and 'x' :");
	scanf_s("%d%d", &a, &x);
	b = a;
	for (n = 1; n <= x; n++)
	{
		sum += a;
		a = a * 10 + b;
	}
	printf_s("The sum is %d", sum);
}
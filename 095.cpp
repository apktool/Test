// 095.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int t=0, n,m;
	printf_s("Please input the number:");
	scanf_s("%d", &n);
	m = n;
	while (m > 0)
	{
		t = t * 10 + m % 10;
		m /= 10;
	}
	if (n == t)
	{
		printf_s("The number is cycle data.\n");
	}
	else
	{
		printf_s("The number is not cycle date.\n");
	}
	getchar();
}
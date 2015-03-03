// 111.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

void main()
{
	int n=1, i;
	for (i = 5; i > 0; i--)
	{
		n = 2 * (n + 1);
	}
	printf_s("%d", n);
	getchar();
}
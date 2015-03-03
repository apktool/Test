// 093.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}


#include"stdio.h"
void main()
{
	int n;
	for (n = 1000; n <= 1999; n++)
	{
		if ((((n % 10) * 1000) + ((n / 10 % 10) * 100) + ((n / 100 % 10) * 10) + (n / 1000)) == n * 9)
			printf_s("%d", n);

	}
	getchar();
}
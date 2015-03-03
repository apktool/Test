// 100.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int i;
	for (i = 1; i <= 1000; i++)
	{
		if (i % 3 != 0)
			continue;
		if (i % 5 != 0)
			continue;
		if (i % 7 != 0)
			continue;
		printf_s("%d ", i);
	}
	getchar();
}
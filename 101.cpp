// 101.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int i, j;
	for (i = 10; i <= 100; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i%j == 0)
				break;
		}
		if (i == j)
			printf_s("%d  ", i);
	}
	getchar();
}
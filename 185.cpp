// 185.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#define N 10
#include"stdio.h"
void main()
{
	int i, j, k;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i < (N / 2) && j<(N/2))
			{
				printf_s("1  ");
			}
			else if (i>=(N / 2) && j >= (N / 2))
			{
				printf_s("2  ");
			}
			else
			{
				printf_s("0  ");
			}
		}
		printf_s("\n");
	}
}
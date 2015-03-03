// 242.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
int get(int *ws, int *lc)
{
	int c;
	*ws = *lc = 0;
	while (1)
	{
		c = getchar();
		switch (c)
		{
		case ' ':
		case '\t':(*ws)++; break;
		case '\n':return 1;
		default:
			if (c >= 'a'&&c <= 'z')
			{
				(*lc)++;
			}
		}
	}
}
void main()
{
	int ws, lc;
	if (get(&ws, &lc))
	{
		printf_s("There are %d whitespace, ", ws);
		printf_s("There are %d charcters. \n", lc);
	}
	else
	{
		printf_s("unexpected end-of-file.");
	}
}
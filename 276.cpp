// 276.cpp : 定义控制台应用程序的入口点。
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
	char str[80];
	for (i = 0; i < 80; i++)
	{
		str[i] = getchar();
		printf_s("*");
		if (str[i] == '\x0d')
		{
			break;
		}
	}
	i = 0;
	printf_s("\n");
	while (str[i] != '\x0d')
	{
		printf_s("%c", str[i++]);
	}
	printf_s("\n");
}
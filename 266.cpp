// 266.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
int main(int argc, char *argv[])
{
	int i;
	for (i = 1; i < argc; i++)
	{
		printf_s("%s%s", argv[i], (i < argc - 1) ? ' ' : '\n');
	}
	printf_s("\n");
	return 0;
}
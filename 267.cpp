// 267.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int max(int x, int y)
{
	return x > y ? x : y;
}
int min(int x, int y)
{
	return x < y ? x : y;
}
int main(int argc, char *argv[])
{
	int a, b;
	char *op;
	if (argc < 4)
		exit(0);
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	op = argv[3];
	if (strcmp(op, "max") == 0)
	{
		printf_s("The %s of %s and %s is : %d\n", argv[3], argv[1], argv[2], max(a, b));
	}
	else if (strcmp(op, "min") == 0)
	{
		printf_s("The %s of %s and %s is : %d\n", argv[3], argv[1], argv[2], min(a, b));
	}
	else
	{
		printf_s("Op should be max or min. \n");
	}
	return 0;
}
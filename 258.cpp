// 258.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
void main()
{
	int(*pmax)(int, int);
	int x, y, z;
	pmax = max;
	printf_s("Please input two number: ");
	scanf_s("%d%d", &x, &y);
	z = (*pmax)(x, y);
	printf_s("The maxnumber is %d", z);
}
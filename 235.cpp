// 235.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int a, *pa;
	pa = &a;
	*pa = 4;
	printf_s("\na=%d", a);
	a = 5 + *pa;
	printf_s("\n*pa=%d", *pa);
	getchar();
}
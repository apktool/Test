// 264.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int a = 1000;
	int *p, **q;
	p = &a;
	q = &p;
	printf_s("%x  %x\n", a, &a);
	printf_s("%x  %x  %x\n", *p, p, &p);
	printf_s("%x  %x  %x  %x\n", **q, *q, q, &q);
	printf_s("\n");
	printf_s("%d  %d\n", a, &a);
	printf_s("%d  %d  %d\n", *p, p, &p);
	printf_s("%d  %d  %d  %d\n", **q, *q, q, &q);
}
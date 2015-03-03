// 232.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include"stdio.h"
void main()
{
	int a, b;
	int *p1, *p2;
	a = 10;
	b = 20;
	p1 = &a;
	p2 = &b;
	printf_s("%x,%d,%x,%d\n", p1, a, p2, b);
	printf_s("%x,%d,%x,%d\n", &a, *p1, &b, *p2);
	getchar();
}